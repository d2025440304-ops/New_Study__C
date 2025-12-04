#include <stdio.h>
#include <stdio.h>


// int main()
// {
//     int a  = 10;
//     int * pa = &a;
//     int * p*aa = &pa;
//     **paa = 20;//**paa的意思是，*paa是pa的地址，**paa是对pa解应用，就是a
//     printf("%d\n",a);
//     printf("%p %p\n",pa,paa);
// }

//指针数组就是存放地址的数组
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = 21;
//     int * arr[3] = {&a,&b,&c};
//     int * pa = &a;
//     int * pb = &b;
//     int * pc = &c;
//     int * str[3] = {pa,pb,pc};
//     return 0;
// }

//用指针数组模拟二维数组
// int main()
// {
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {2,3,4,5,6};
//     int arr3[] = {3,4,5,6,7};
//     int * arr [] = {arr1,arr2,arr3};//*说明arr是指针变量,[]说明arr是数组，int说明存放的地址中的元素是整形
//     for(int i = 0;i<3;i++)
//     {
//         for(int j = 0;j < 5;j++)
//         {
//             printf("%d ",arr[i][j]);//arr[i]表示指针数组中下标为i的数组地址，[j]表示该数组下表为j的元素
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    char ch = 'w';
    char * pc = &ch;//pc字符指针变量
    char arr[] = "abcdef";
    // char *pc = arr;
    // const char * pc = "abcdef";
//     printf("%c\n",*pc);
    printf("%s\n",arr);
    return 0;
}


// int main()
// {
//    char str1[] = "hello bit.";//两个不同的字符串数组
//    char str2[] = "hello bit.";

//    const char* str3 = "hello bit.";//常量字符串
//    const char* str4 = "hello bit.";

//    if (str1 == str2)//数组比较，地址是否相等，不同的数组，地址不同，不相等
//        printf("str1 and str2 are same\n");//1
//    else
//        printf("str1 and str2 are not same\n");//2

//    if (str3 == str4)//常量字符串，不会存两份，地址相同
//        printf("str3 and str4 are same\n");//3
//    else
//        printf("str3 and str4 are not same\n");//4
//    return 0;
// }


//数组指针;就是指向整个数组的指针
int main()
{
    int arr [] = {0,0,0,0,0};
    printf("%p\n",arr);//数组首元素，地址是首元素
    printf("%p\n",&arr);//整个数组，地址是首元素
    int (*p) [10] =&arr;//取出的是整个数组的地址
    int *p = arr;//取出的是首元素的地址
    //int表示数组指针指向的数组元素是整形，*P表示是指针，[10]表示指向的整个数组 
    return 0;
}

//数组指针写法   type (*p) [n] = &arr，必须有括号结合，不然会变成指针数组
// int main()
// {
//     char arr[5];
//     char (*p) [5] = &arr;
        // (*p)就是arr，p就是数组arr的地址
//     char* arr[5];//指针数组，有五个地址元素
//     char* (*p) [5] = &arr;//数组指针，指向整个指针数组
//     //*p说明是指针变量，&arr，[5]说明指向整个数组，char *说明数组中的元素都是字符指针变量
//     return 0;
// }

// int main()
// {
//     int arr [] = {0,0,0,0,0};
//     int (*p) [5] = &arr;
//     for(int i = 0;i<5;i++)
//     {
//         printf("%d ",(*p)[i]);//*p就是arr
//     }
//     return 0;
// }

void test (int (*arr) [5],int c,int r)
{
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<5;j++)
        {
            printf("%d",*(*(arr+i)+j));//arr+i是指向下标为i的数组，*解应用访问下表为i的数组，+j访问下表为i的数组下表为j的元素
             //等价于arr[i][j]
        }
    }
}
int main()
{
    int arr [3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    test(arr,3,5);
    //传的是首元素的地址，二维数组中的每个元素都是一维数组
    //所以实参传的下表为0的整个数组
    return 0;
}

// 函数指针变量  返回类型+(*函数名)(参数类型) = 函数名
int Add(int x,int y)
{
    return x+y;
}
char * test(int n,char *p)
{

}
int main()
{
    printf("%p\n",&Add);//函数名就是 地址
    printf("%p\n",Add);

    int (*pf)(int,int) = Add;
        // pf就是函数指针变量,存的是函数的地址
        // (*pf)就是函数名字
        // 又因为函数名又是地址，所以调用函数指针时可以省去解应用
    //int表明函数返回类型是int，
    //*pf表明是指针变量，
    //（int，int）表明函数参数都是int
    // Add就是函数指针存放的地址
    char * (*pf2)(int,char *) = test;
     return 0;
}

// int Add(int x,int y)
// {
//     return x+y;
// }
// int main()
// {
//     int (*add)(int,int) = Add;
//     int r = add(3,5);
//     printf("%d\n",r);
//     int k = (*add)(3,5);
//     printf("%d\n",k);
// }

// int main()
// {
//     (* (void (*)())0)();
//     // void (*)()函数指针类型
//     //(int)3.14;//强制类型转换
//     //1.void (*)()是一个函数指针类型，这个指针指向的函数没有参数，返回类型是void
//     //(void (*)())0
//     //2.在0旁边有括号，想到强制类型转换，说明将0强制类型转换成一个返回类型时void的函数指针，就意味着0地址处有一个函数指针
//     //3.(*(void (*)())0)();对0地址处的函数解应用，去调用0地址处的函数
    
//     return 0;
// }

//加分号
//函数的定义-no
//函数的调用-no
//函数的声明-ok

// int main()
// {
//     void(* signal(int,void(*)(int)))(int);//有分号，函数的声明
//     //signal是一个函数指针变量
//     //指向的函数参数一个是int
//     //另一个参数是函数指针类型，这个函数指针返回类型是void参数是int
//     //signal函数的返回类型也一个函数指针类型void(*)(int),该函数指针变量的参数是int类型，返回类型是void
//     void(* signal(int,void(*)(int)))(int);
//      void(*)(int) signal(int,void(*)(int));
//     return 0;
// }

// typedef void(*pf_t)(int);//类型重命名，重定义函数指针时在(*)后就是重新定义的类型名字
// void test(int n)//回调函数
// {

// }
// int main()
// {
//     pf_t signal(int,pf_t);//函数的声明
//     signal(100,test);//函数的调用
// }
//signal是函数名字，有函数指针类型的参数，所以传一个函数的地址，通过函数指针来调用这个函数，这个函数就叫回调函数
//函数指针可以指任何一个相同类型的函数，来调用这个函数，将这个函数称为回调函数

// typedef 类型重命名
// typedef unsigned int uint;
// typedef int* pint;
// int main()
// {
//     unsigned int age1 = 100;
//     uint age = 10;
    
//     int * p1 = &age;
//     pint p = &age;
//     return 0;
// }

// typedef int (*parr_t)[5];
// //parr_t就是数组指针类型了，存放指针指向整形的地址，存放五个
// int main()
// {
//     int arr[5] = {0};
//     int (*p)[5] = &arr;//p是数组指针变量，p的类型是int (*)[5]
//     parr_t pf = &arr;
//     return 0;
// }

// int Add(int x,int y)
// {
//      return x+y;
// }

// typedef int(*prr_t)(int,int);
// //prr_t就是函数指针类型了
// //用typedef重命名数组指针和函数指针时
// //typedef后直接正常写数组指针或者函数指针的类型写
// //类型的数组名或者函数名就是重定义类型的名字
// int main()
// {
//     prr_t add = Add;
//     printf("%d\n",add(3,5));
//     return 0;
// }
// int Add(int x,int y)
// {
//     return x+y;
// }
// typedef int (*prr_t)(int,int);
// int main()
// {
//     prr_t add = Add;//prr_t是函数指针类型
//     printf("%d\n",add(2,3));
//     return 0;
// }