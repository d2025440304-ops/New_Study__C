#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>

// unsigned char i = 0;
// //unsigned char 的范围是 0～255

// int main()
// {
//     for(int i = 0;i<=255;i++)
//     {
//         printf("hello world\n");
//     }
//     return 0;
// }

// int main()
// {
//     unsigned int i ;//
//     for(int i =9;i>=0;i--)
//     {
//         printf("%u\n",i);
//         sleep(1);
//     }
//     return 0;
// }


//小端字节序
// int main()
// {
//     int a[4] = {1,2,3,4};
//     int *ptr1 = (int *)(&a+1);
//     //&a是数组指针，+1 
//     int *ptr2 = (int *)((int)a+1);
//     //强制转换成 int 就变成了一个数字，加 1 就是十六进制加 1，指向下一个字节
//     //00 00 00 01
//     //01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//     printf("%#x,%#x",ptr1[-1],*ptr2);
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//    int n = 9;
//    float* pFloat = (float*)&n;//int*
//    printf("n的值为：%d\n", n);
//    //以浮点数的视角存储看待那串补码
//    //一位 s 决定正负，八位 e 是指数幂，23 位m 存储二进制位的小数，当e 位全 0 时，就  不用记上 1
//    //0      00000000    000000000000000001100
//    //S；1     E；8             M；23
//    printf("*pFloat的值为：%f\n", *pFloat);

//    *pFloat = 9.0;
//    //现在是以 9.0浮点数存进了*pfloat
//    // 9.0的二进制是 1100
//    //转换为科学技术是 1.100 * 2^3
//    //转换为标准浮点数的二进制是 (-1)^0 * 1.100 * 2 ^3
//    //S = 0;
//    //M = 1.100;
//    //E = 3;
//    // 3+127 = 130；

//    printf("num的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//    return 0;
// }



//匿名结构体类型

// struct S
// {
//     double d;
//     int i;
//     char c;
// };
// //没有类型的匿名结构体只能调用一次
// struct 
// {
//     double d;
//     int i;
//     char c;
// }x;
// //如果要匿名使用多次，最好利用重命名
// typedef struct 
// {
//     double s;
//     int i ;
//     char c;
// }X;
// int main()
// {
//     struct S s;
//     X x;
//     return 0;
// }

//关于链表，要找到下一个结构体，就要在一个结构体中，存数据，再存能找到下一个结构体的指针
//结构体的自引用
// typedef struct Node
// {
//     int data;//数据
//     struct Node *next;//指针
// }Node;

// struct Node 
// {
//     int data;//数据
//     struct Node *next;//指针
// };
// typedef struct Node Node ;

//匿名的结构体不支持结构体的自引用


//结构体的大小计算
//从一开始，结构体的第一个元素默认放在偏移量为 0 的为位置，对齐数是自身
//从第二个元素开始，放置内存的位置必须是对齐数是整数倍，对齐数是自身类型所占空间的大小和编译器的对齐数比较小的那个
//最后放置完了后，整个结构体的内存大小必须是整个结构体的所有类型的最大对齐数的整数倍
//如果有结构体嵌套，还要包括嵌套结构体的大小
// struct Node
// {
//     double p;//8 8 8        7
//     char c;//1 8 1          8
//     int i;//4 8 4           15
//     //16
// };
// int main()
// {
//     int sz = sizeof(struct Node);
//     printf("%d \n",sz);
//     return 0;
// }

//修改默认对齐数
// #pragma pack(1)
// struct S
// {              //对齐数
//     char c1;  // 1 1 1
//     int i ;  // 4 1 1
//     char c2;// 1 1 1
// };
// int main()
// {
//     printf("%zd\n",sizeof(struct S));
//     return 0;
// }


//结构体的传值和传址
// struct S
// {
//     int arr[9];
//     double gpa;
//     int age;
// };
// void print1(struct S s)
// {
//     for(int i = 0;i<sizeof(s.arr)/sizeof(s.arr[0]);i++)
//     {
//         printf("%d ",s.arr[i] = i);
//     }
//     printf("%lf\n",s.gpa = 9.0);
//     printf("%d\n",s.age);
// }
// void print2(struct S *ps)
// {
//     for(int i = 0;i<sizeof(ps->arr)/sizeof(ps->arr[0]);i++)
//     {
//         printf("%d ",ps->arr[i] = i);
//     }
//     printf("%lf\n",ps->gpa = 9.0);
//     printf("%d\n",ps->age);
// }
// int main()
// {
//     struct S s = {{1,2,3,4,5},3.14,18};
//     print1(s);
//     print2(&s);
//     return 0;
// }


//位端结构体，位断是依据于结构体的

//位端是为了节省空间，用比特位来给一个类型的空间
// struct S
// {
//     int _a:2;
//     int _b:5;
//     int _c:10;
//     int _d:30;
// };

// struct S
// {
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
// };
// //模拟位断
// // 先申请，不够用了再使用，
// // 第一次 ；  0 1100 010
// //              b    a
// // 第二次 ；   000 00011
// //                  c
// // 第三次  ；  0000 0100
// //                  d
// //位端有跨平台的风险
// int main()
// {
//     struct S s;
//     s.a = 10;//1010
//     s.b = 12;//1100
//     s.c = 3;//0011
//     s.d = 4;//0100
//     printf("%zd\n",sizeof(struct S));
//     return 0;
// }

// struct A
// {
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
// };


// int main()
// {
//    struct A sa = { 0 };
//    //scanf("%d", &(sa._b));//这是错误的
//     //因为位断是按照比特位来的，而有些地址有可能找不到
//    //正确的示范
//    //所以，位断的结构体内容，可以赋值，但不能输入
//    int b = 0;
//    scanf("%d", &b);
//    sa._b = b;

//    return 0;
// }


//联合体，共用一块内存，满足最大的那个数据的内存，一个改变，会影响其他的值，所以最好单独使用
// union Un
// {
//     char c;//1
//     int i;//4
// };

// int mian()
// {
//     union Un x  = {0};
//     printf("%zd\n",sizeof(x));//4
//     printf("%p\n",&(x.c));
//     printf("%p\n",&(x.i));
//     printf("%p\n",&x);
//     return 0;
// }


//联合体也有内存对齐，联合体的内存必须是联合体成员最大对齐数的整数倍
// union Un
// {
//     char c [5];
//     int i;
// };
// int main()
// {
//     union Un oun = {0};
//     printf("%zd\n",sizeof(oun));
//     return 0;
// }
struct gift_list
{
    int stock_number;//库存量
    double price;//定价
    int item_type;//商品类型
    union 
    {
         struct 
       {
           char title[20];//书名
           char author[20];//作者
           int num_pages;//页数
       }book;
       struct 
       {
           char design[30];//设计
       }mug;
       struct 
       {
           char design[30];//设计
           int colors;//颜色
           int sizes;//尺寸
       }shirt;
   }item;
};
int main()
{
    struct gift_list gl;
    return 0;
}