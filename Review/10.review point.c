#include <stdio.h>
  
// int main()
// {
//     int a = 10;
//     int * pa = &a;
//     double b = 10.0;
//     double * pb = &b;
//     char c = 'a';
//     char * pc = &c;
//     //根据指针指向的对象的类型来确定指针变量的类型；
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int * pa = &a;
//     char * pc = &a;
//     printf("pa   = %p\n",pa);
//     printf("pa+1 = %p\n",pa+1);

//     printf("pc   = %p\n",pc);
//     printf("pc+1 = %p\n",pc+1);
//     // pa   = 000000000061FE3C
//     //16进一，整形指针的步长是4；
//     // pa+1 = 000000000061FE40
//     // pc   = 000000000061FE3C
//     //字符指针的步长为1；
//     // pc+1 = 000000000061FE3D
//     return 0;

// }

//逆序输出
// int main()
// {
//     int arr [] = {1,2,3,4,5,6,7,8,9};
//     int * p = arr;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     for(int i = sz - 1;i>=0;i--)
//     {
//         printf("%d ",*(p+i));
//     }
//       //此次循环用到了for循环的参数
//     return 0;
// }

// int main()
// {
//     int arr [] = {1,2,3,4,5,7,8};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int * p = &arr[sz-1];  
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",*p);
//         p--;
//     }
//     //此for循环内部没有用到for循环的参数，for循环只起到了循环sz-1次的作用
//     return 0;
// }

// int main()
// {
//     char arr[] = "abcdef";
//     char * p =arr;
//     int cnt = 0;
//     while(*p)
//     {
//         printf("%c",*p);
//         p++;
//         cnt++;
//     }
//     printf("\n");
//     printf("%d\n",cnt);
//     return 0;
// }

//|指针-指针|：得到的是两个指针之间的元素，低地址-高地址是负值
//高地址-低地址得到是正值
//两个指针必须指向同一块空间，不然不能相减
// int main()
// {
//     int arr[10] = {0};
//     printf("%lld\n",&arr[9]-&arr[0]);
//     printf("%lld\n",&arr[0]-&arr[9]);
//     return 0;
// }

// int my_strlen(char * p)
// {
//     char * z = p;
//     while(*p)
//     {
//         p++;
//     }
//     int x = p-z;
//     return x;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     int r = my_strlen(arr);
//     printf("%d\n",r);
//     return 0;
// }

// //指针的关系
// int main()
// {
//     int arr[10] = {0};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int * p = arr;
//     while(p<arr+sz)
//     {
//         printf("%d ",*p);
//         p++;
//     }
//     return 0;
// }

//const修饰的指针变量
//当const放在*的左边，修饰的是*p，此时*p的指不能改变，但是指针p所指向的对象可以改变
//当const放在*的右边，修饰的是p，此时*p的值可以改变，但是指针p所指向的对象不能改变
// int main()
// {
//     int a = 10;
//     const int *pa = &a;
//     //*pa = 28//error
//     int b = 19;
//     pa = &b;//ok
//     printf("%p\n",&a);
//     printf("%p\n",&b);
//     printf("%p\n",pa);
//     return 0;
// }


// int main()
// {
//     int a = 10;
//     int * pa = &a;//取出a的地址放在指针变量里
//     //int 代表pa所指向的对象是int类型 ，* 说明pa是指针变量
//     * pa = 20;
//     printf("%d\n",a);
//     printf("%d\n",*pa);
//     return 0;
// }

//pa 是 a的地址
//*pa 是 a的值


int main()
{
    int arr [] = {0,1,2,3,4,5,6,7,8,9};
    int * p = &arr[0];
    // int * p = arr;
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i <sz; i++)
    {
        //以不同方式的输出,相同的结果
        printf("%d ",arr[i]);     
        printf("%d ",*(p+i));
    }
    //  ** 核心理解：
    //  - 数组名 `arr` 在表达式中退化为指向首元素的指针（int*）
    //  - 因此 arr[i]  =  *(arr+i);
    //  - 注意：arr 本身不是指针，但在大多数上下文中表现得像指针
    //  - 例外：
    //  *   sizeof(arr) → 整个数组大小
    //  *   &arr       → 指向整个数组的指针（类型：int(*)[10]）
    return 0;
}

// int * test()
// {
//     int n = 100;
//     return &n;
// }

//n出了函数以后，地址已经销毁了

// int main()
// {
//     int * p = test();
//     printf("%d\n",*p);
//     printf("hehe\n");
//     return 0;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,66,7,8,9};
//     int * p  = arr;
//     size_t sz = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0;i<sz;i++)
//     {
//         *p = 5;
//          p++;//循环到第九次的时候， p = &arr[9];
//     }
//     //但是并没有arr[9],如果此时不重置指针，就会越界访问，读取到不是数组的内存
//     //重置访问
//      p = arr;
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",*p);
//         p++;
//     }
//     printf("\n");
//     return 0;
// }

//assert 如果assert()，括号里的为假，就报错
#include <assert.h>
// int mian()
// {
//     int a = 10;
//     int * pa = NULL;
//     assert(pa != NULL);
//     printf("%d\n",*pa);
//     return 0;
// }

//指针的类型决定了访问指针时，指针++的步长
//char* 步长为 1
//int*的步长为 4
//字符串的长度>=0，size_t
// int  my_strlen(char * p)
// {
//     size_t cnt = 0;
//     assert(p != NULL);
//     while(*p)//计算到\0时就停止
//     {
//         cnt++;
//         p++;//指针往后走
//     }
//     return cnt ;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     size_t len = my_strlen(arr);
//     printf("%zu ",len);
//     return 0;
// }



//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前: a = %d b = %d\n", a, b);
//	//
//	Swap1(a, b); //传值调用
//	printf("交换后: a = %d b = %d\n", a, b);
//
//	return 0;
//}


//形参的地址和实参的地址是不一样的，内存空间也不一样

// void swap(int * pa ,int *pb)
// {
//     int z  = 0;
//     z = *pa ;
//     *pa = *pb;
//     *pb = z;
// }


// int main()
// {
//     int b = 10;
//     int a = 20;
//     const int * pa = &a;
//     const int * pb = &b;
//     swap(&a,&b);
//     printf("%d,%d",a,b);
//     return 0;
// }

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));//40?
//	//如果说arr是数组首元素的地址的话，那这里不是计算一个地址的大小，是4/8吗？
//	return 0;
//}

//%p - 专门用来打印地址的，是16进制的形式，前面的0不会省略

// int main()
// {
// 	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
// 	printf("%zd\n", sizeof(arr));//10*4 = 40

// 	printf("arr       = %p\n", arr);//首元素的地址
// 	printf("arr+1     = %p\n", arr+1);//首元素的地址

// 	printf("&arr[0]   = %p\n", &arr[0]);//首元素的地址
// 	printf("&arr[0]+1 = %p\n", &arr[0]+1);//首元素的地址

// 	printf("&arr      = %p\n", &arr);//数组的地址
// 	printf("&arr+1    = %p\n", &arr+1);//数组的地址
//     //数组的地址加1是加整个数组的空间大小
// 	return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     int * p = arr;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0;i < sz;i++)
//     {
//         scanf("%d",p);
//         p++;
//     }
//     printf("\n");
//      p = arr;
//     for(int i = 0;i< sz;i++)
//     {
//         printf("%d ",*p);
//         p++;
//     }
//     return 0;
// }

// int main()
// {
//     int arr [10] = 0;
//     int * p = arr;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0;i<sz;i++)
//     {
//         scanf("%d",p+i);
//         //scnaf("%d",arr[i]);
//     }
//     p = arr;
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",*(p+i));
//         // printf("%d ",arr[i]);
//     }
//     return 0;
// }


//int main()
//{
//	int arr[10] = { 0 };
//	//给数组中存放1 2 3 4 5 6 7 8 9 10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr+i);
//	}
//
//	//打印出数组的所有内容
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	return 0;
//}
//

//sizeof是一个运算符，计算类型的内存大小
//传的是地址的内存大小
// void test(int *arr,int sz)
// {
//     //int sz2 = sizeof(arr)/sizeof(arr[0]);//在函数内求参数的数组元素个数是错误的
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",*(arr+i));
//         printf("%d ",arr[i]);
//     }
// }

// void test(int arr[])
// {
//     int sz1 = sizeof(arr)/sizeof(arr[0]);//8/4
//     printf("%d ",sz1);//2
//     //sizeof(arr)是地址的大小
// }
// int main() 
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     printf("%d ",sz);
//     test(arr);//传的是地址
//     return 0;
// }



// 冒泡排序
// 987654321
// 从第一个元素开始，依次相后，通过相邻元素的比大小互换，来进行排序
// 假设有n个元素，先排第一个元素，两两互相比较，至多要比n-1次
// 这样就把第一个元素按照顺序拍到最后一个
// 第二个元素要排
// int main()
// {
//     int arr [] = {1,4,3,6,5,8,9};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int * p = arr;
//     int flag = 1;
//     //排序第一趟
//     for(int i = 0;i<sz-1;i++)
//     {
//         for(int j = 0;j<sz-1-i;j++)
//         {
//             if(*(p+j)>*(p+j+1))
//             {
//                 int z = 0;
//                 z = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = z;
//                 flag = 0;
//             }
//         }
//         if(flag==1)
//         {
//             break;
//         }
//     }
//     p = arr;
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",*(p+i));
//     }
//     return 0;
// }
//写成函数的形式
// void paixu(int arr[],int sz)
// {
//         int flag = 1;
//         //一共至多排九趟
//         for(int i = 0;i<sz-1;i++)
//         {
//                 //每一趟内部进行比较
//                 for(int j = 0;j<sz-1;j++)
//                 {
//                         if(arr[j]>arr[j+1])
//                         {
//                                 int temp = arr[j];
//                                 arr[j]   = arr[j+1];
//                                 arr[j+1] = temp;
//                                 flag=1;
//                         }
//                 }
//                 if(flag==0)
//                 {
//                         break;
//                 }
//         }
// }
// void print(int arr[],int sz)
// {
//         int * p = arr;
//         for(int i = 0;i<sz;i++)
//         {
//                 printf("%d ",*(p+i));
//         }
// }
// int main()
// {       
//         int arr [] ={1,7,4,6,43,5,22,76,72,100,34};
//         int sz = sizeof(arr)/sizeof(arr[0]);
//         paixu(arr,sz);
//         print(arr,sz);
//         return 0;
// }

 

