#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 冒泡排序
// void bubble_sort(int arr[],int sz)
// {
//     int flag = 1;
//     for(int i = 0;i<sz-1;i++)
//     {
//         for(int j = 0;j<sz-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 flag = 0;
//             }
//         }
//         if(flag==1)
//         {
//             break;
//         }
//     }
// }
// void print(int arr[],int sz)
// {
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
// int main()
// {
//     int arr[] = {9,8,2,3,1,5,4,7,23};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     print(arr,sz);
//     return 0;
// }


// C语言内置排序函数
// void qsort(void * p//第一个参数，指向数组的第一个元素
//            size_t  sz//第二个参数，算出数组的元素个数
//            size_t  size//第三个参数，算出一个元素多大内存
//            int ()(const void *,const void *);//第四个参数，函数指针变量，返回类型是int，两个参数都是指针

// int (*pf)(const void *,const void *)
// > --返回大于0
// == --返回0
// < ---返回小于0

// void* 是泛型指针，无具体类型，不能直接解应用
// int cmp_int (const void* p1,const void *p2)
// {
//     if(*(int*)p1>*(int*)p2)
//         return 1;
//     else if(*(int*)p1 == *(int*)p2)
//         return 0;
//     else
//         return -1;
// }

// int cmp_int (const void *p1,const void* p2)
// {
//     return *(int*)p1 - *(int*)p2; 
// }
// void print(int arr[],int sz)
// {
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
// void test()
// {
//     int arr [] = {2,4,6,31,3,54,23,54};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int (*pf)(const void*,const void *) = cmp_int;
//     //写一段代码用qsort排序整形数据
//     qsort(arr,sz,sizeof(arr[0]),pf);
//     print(arr,sz);
// }
// struct stu
// {
//     char name[20];
//     int age;
// };
// //比较函数，升序
// int cmp_struct_name(const void *e1,const void *e2)
// {
//     return strcmp(((const struct stu *)e1)->name,((const struct stu*)e2)->name);//传字符地址
// }
// //打印函数
// void print1(struct stu arr1[],int sz)
// {
//     for(int i = 0;i<sz;i++)
//     {
//         printf("名字：%s  年龄：%d ",arr1[i].name,arr1[i].age);
//     }
//     printf("\n");
// }
// //比较结构体的年龄大小
// int cmp_struct_age (const void *p1,const void* p2)
// {
//     const struct stu *s1 = (const struct stu *)p1;
//     const struct stu *s2 = (const struct stu *)p2;
//     return (s1->age>s2->age) - (s1->age<s2->age); 
// }
// // void test2()
// // {
// //     struct stu arr1[] = {{"zhangsan",20},{"wu",18},{"yi",13}};
// //     int sz1 = sizeof(arr1)/sizeof(arr1[0]);
// //     qsort(arr1,sz1,sizeof(arr1[0]),cmp_struct_age);
// //     print1(arr1,sz1);
// // }
// int cmp_int (const void *p1,const void* p2)
// {
//     return (*(int*)p1 > *(int*)p2) - (*(int*)p1 < *(int*)p2); 
// }
// void print(int arr[],int sz)
// {
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }*pf
// //自己设计一个类似于qsort的函数，但用bubble_sort的逻辑
// //不知道调用的时候到底排什么，所以要写出通用的排序算法
// //优化在，在比较函数中，可以用下面的代码来优化，避免整数溢出的问题
// // (a>b) - (a<b)
// void swap (char * buf1,char* buf2,size_t size)
// {
//     int i = 0;
//     for(i = 0;i<size;i++)
//     {
//         char tmp = *buf1;
//         *buf1 = *buf2;
//         *buf2 =tmp;
//         buf1++;
//         buf2++; 
//     }
// }
// void bubble_sort(void *base,size_t sz,size_t size,int (*cmp)(const void*p1,const void *p2))
// {
//     for(int i = 0;i<sz-1;i++)
//     {
//         for(int j = 0;j<sz-1-i;j++)
//         {
//             //比较arr[j] 和 arr[j+1]
//             //比较函数
//             if(cmp((char *)base+j*size,(char *)base+(j+1)*size) > 0)
//             {
//                 //交换这两个元素
//                 swap((char *)base+j*size,(char*)base+(j+1)*size,size);
//             }
//         }
//     }
// }
// //测试bubble_sort排序整形数据
// void test3()
// {
//     int arr[] = {4,3,7,6,9,8,1,5};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//     print(arr,sz);
// }
// void test4()
// {
//     struct stu arr1[] = {{"zhangsan",20},{"wu",18},{"yi",13}};
//     int sz1 = sizeof(arr1)/sizeof(arr1[0]);
//     bubble_sort(arr1,sz1,sizeof(arr1[0]),cmp_struct_age);
//     print1(arr1,sz1);
// }
// int main()
// {
//     // test1();//用qsort排序一个整形数组
//     // test2();
//     test3();
//     test4();
//     return 0;
// }







// struct stu
// {
//     char name[20];
//     int age;
// };

// void print(struct stu *ps)
// {
//     printf("%s %d\n",(*ps).name,(*ps).age);
//      printf("%s %d\n",ps->name,ps->age);
// }
// ////结构体成员的间接访问操作符
// ////   结构体指针 -> 成员名
// //结构体.结构体成员名
// int main()
// {
//     struct stu str[3] = {{"yi",18},{"er",16},{"san",19}};
//     printf("%s %d\n",str[1].name,str[2].age);
//     print(&str);
//     return 0;
// }

// #include <string.h>
// int main()
// {
//     size_t len = strlen("abc\0def");
//     printf("%zd\n",len);
//     return 0;
// }

// int main()
// {
//     const char* str = "abcdef";//字符串指针名字就是指向第一个元素的指针，且不可被修改
//     char str[] = "abcdef";
//     printf("%zd\n",strlen(str));
//     return 0;
// }

