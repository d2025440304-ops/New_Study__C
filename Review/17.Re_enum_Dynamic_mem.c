#include <stdio.h>

// //枚举常量；通过枚举列出所有的可能情况，枚举是有编号的，从 0 开始
// enum Color
// {
//     //三原色的可能取值 -- 枚举常量
//     RED,   //0
//     GREEN,  //1
//     BLUE    //2
// };
// enum Sex
// {
//     FEMALE = 2,
//     MALE,//3
//     SECRET//4
// };

// int main()
// {
//     enum Color color1 = RED;
//     enum Color color2 = GREEN;
//     enum Sex sex = MALE;
//     printf("%s\n",color1);
//     return 0;
// }//

// void menu()
// {
// 	printf("**************************\n");
// 	printf("****  1. add    2.sub ****\n");
// 	printf("****  3. mul    4.div ****\n");
// 	printf("****  0. exit         ****\n");
// 	printf("**************************\n");
// }

// enum Option
// {
// 	EXIT,//0
// 	ADD,//1
// 	SUB,//2
// 	MUL,//3
// 	DIV//4
// };
// int manin()
// {
//     int input = 0;
//     printf("请选择>");
//     scanf("%d",&input);
//     switch(input)
//     {
//         case ADD:
//             break;
//         case DIV:
//             break;
//         case MUL:
//             break;
//         case SUB:
//             break;
//         case EXIT:
//             break;
//         default:
//             break;
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// int main()
// {
//     //20个字节，存放五个整数
//     //动态内存，向系统申请一块内存，用来存放
//     //在收回时，需要主动释放，将这块内存还给系统，但是这块内存依旧存在
//     int * pf= (int *)malloc(20);
//     //申请完后需要判断非空,,看看申请成功了没
//     if(pf == NULL)
//     {
//         perror("malloc");
//         return 1;
//     }
//     //使用过空间
//     int i = 0;
//     for(int i = 0;i<5;i++)
//     {
//         //用*(pf+i)比 pf++更好
//         //不改变 pf 的值
//         //因为等释放内存时，需要释放的地址是起始申请空间的地址
//         *(pf+i) = i+1;
//     }

//     free(pf);
//     //释放后 pf 指向的内容是未知区域，变成了野指针，危险
//     //所以要赋为空
//     pf = NULL;

//     return 0;
// }


// int main()
// {
//     // int *pf = (int *)malloc(5*sizeof(int));

//     // if(pf == NULL)
//     // {
//     //     perror("malloc");
//     //     return 1;
//     // }

//     int * pf = (int *)calloc(5,sizeof(int));
//     //返回的是起始地址，并且 calloc 会将所有内容初始化为 0
//     if(pf == NULL)
//     {
//         perror("calloc");
//         return 1;
//     }

//     for(int i = 0;i<5;i++)  
//     {
//         *(pf+i) = i+1;
//     }

//     free(pf);
//     pf = NULL;
// }

// int main()
// {
//     int * ptr = (int *)malloc(20);
//     //判断
//     if(ptr == NULL)
//     {
//         perror("malloc");
//         return 1;
//     }
//     //输入
//     for(int i = 0;i<5;i++)
//     {
//         *(ptr+i) = i+1;
//     }
//     //void * realloc(void *p,size_t num)
//     int *p= (int *)realloc(ptr,4000);
//     if(p != NULL)
//     {
//         ptr = p;
//         for(int i = 0;i<40;i++)
//         {
//             *(ptr+i) = i+1;
//         }
//         for(int i = 0;i<40;i++)
//         {
//             printf("%d ",*(ptr+i));
//         }
//         free(ptr);
//         ptr = NULL;
//     }
//     else //调整失败
//     {
//         perror("realloc");
//         free(ptr);
//         ptr =NULL;
//     }

//     return 0;
// }

//realloc 可以完成和 malloc 一样的功能
// int main()
// {
//     //当第一个指针为空时
//     realloc(NULL,20);// == malloc(20);
//     return 0;
// }


// int main()
// {
//     int *p = (int *)malloc(INT_MAX);
//     if((p == NULL))
//         perror("malloc()");
//     return 0;
// }




#include <assert.h>
// int main()
// {
// 	int* p = (int*)malloc(INT_MAX);
// 	/*if (p == NULL)
// 	{
// 		perror("malloc");
// 		return 1;
// 	}*/
// 	assert(p);
// 	//
// 	*p = 20;

// 	return 0;
// }

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//....
//
//	free(p);//4.3 对非动态开辟内存使用free释放
//      //free只能释放申请的动态内存
        //free要从申请动态内存的起始地址释放
//	p = NULL;
//
//	return 0;
//}

// void GetMemory(char** p)
// {
//     //解引用*p 找到 str 指针
//    *p = (char*)malloc(100);
// }

// void Test(void)
// {
//    char* str = NULL;
//    GetMemory(&str);
//    //传过去指针的地址，用二级指针接收
//    //拷贝函数
//    //memcpy(str,"hello world");
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
// }

// int main()
// {
//    Test();
//    return 0;
// }


//柔性数组基于结构体
//放在最后一个定义，且不写数组元素个数

// struct S
// {
//     char c;
//     int i;
//     int arr[];//柔性数组
// };

// struct S
// {
//     char c;
//     int arr[0];//柔性数组
// };

// int main()
// {
//     //用柔性数组的时候要用结构体指针
//     //sizeof(struct S)不包括柔性数组的大小
//     //含有柔性数组的在分配动态内存的时候是不包括柔性数组的，sizeof(struct S)
//     struct S *pf = (struct S *)malloc(sizeof(struct S)+5*sizeof(int));
//     if(pf == NULL)
//     {
//         perror("malloc");
//         return 1;
//     }
//     for(int i =0;i<5;i++)   
//     {
//         pf->arr[i] = i+1;
//     }
//     //调整空间
//     struct S *ps = (struct S*)realloc(pf,sizeof(struct S)+20*sizeof(int));
//     if(ps != NULL)
//     {
//         pf = ps;
//         for(int i = 0;i<20;i++)
//         {
//             pf->arr[i] = i+1;
//         }
//     }
//     //释放
//     free(pf);
//     pf = NULL;
//     return 0;
// }