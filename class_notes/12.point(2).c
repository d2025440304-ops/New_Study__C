#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	a = 200;
//	printf("%d\n", **ppa);//200
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	//arr 就是指针数组
//	
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//
//	return 0;
//}

//使用指针数组，模拟一个二维数组
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[] = { arr1, arr2, arr3 };
//	//arr是指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;//pc字符指针变量
//
//	//char arr[] = "abcdef";
//	//char* pc = arr;
//
//	//const char* pc = "abcdef";//"abcdef"是常量字符串,是不能给修改的
//	//pc中存放的是首字符a的地址
//	//printf("%c\n", *pc);
//	//printf("%s\n", pc);
//	//*pc = 'w';
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");//1
//    else
//        printf("str1 and str2 are not same\n");//2
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//3
//    else
//        printf("str3 and str4 are not same\n");//4
//
//    return 0;
//}
//


//int main()
//{
//	int arr[10] = { 0 };
//	//arr;//首元素的地址
//	//&arr[0];
//	int(*p)[10] = &arr;//取出的是整个数组的地址 - 数组的地址
//	//p就是数组指针变量
//	//存放的是数组的地址
//	//p指向的就是数组arr
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//p是整型指针变量
//	//存放的是首元素的地址
//	//p是指向首元素
//	return 0;
//}


//int main()
//{
//	//char arr[5];
//	//char (*p)[5] = &arr;
//
//	char* arr[5];
//	char* (*p)[5] = &arr;
//
//	return 0;
//}
//

// int main()
// {
// 	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
// 	int (* p)[10] = &arr;

// 	int i = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", (*p)[i]);
// 	}

// 	return 0;
// }

// int main()
// {
// 	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
// 	int* p = arr;

// 	int i = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", p[i]);
// 	}

// 	return 0;
// }

//二维数组传参，形参可以写成二维数组
//void test(int arr[3][5], int r, int c)
//void test(int arr[][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void test(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//			//              arr[i][j]
//			//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	test(arr, 3, 5);
//	//实参写的也是数组名
//	//数组名都表示数组首元素的地址
//	//到底是谁的地址? 是第一行这个一维数组的地址
//	//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int* test(int n, char* p)
//{
//
//}
//int main()
//{
//	//printf("%p\n", &Add);//函数的地址
//	//printf("%p\n", Add); //函数的地址
//
//	int (*pf)(int, int) = &Add;//pf就是函数指针变量
//	int* (*pt)(int, char*) = &test;
//
//	return  0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	/*int (*pf)(int, int) = &Add;
//	int r = (*pf)(10, 20);
//	printf("%d\n", r);*/
//
//	int (* pf)(int, int) = &Add;
//	int r = pf(10, 20);
//	printf("%d\n", r);
//
//	/*int r = Add(10, 20); 
//	printf("%d\n", r);*/
//
//	return  0;
//}


//int main()
//{
//	//void (*)();//函数指针类型
//	//(int)3.14;
//	(* (void (*)())0)();
//	//解释这段代码
//	//这段代码是在调用0地址处的一个函数
//	//1.void (*)()是一个函数指针类型，这个指针指向的函数没有参数，返回类型是void
//	//2.(void (*)())0 这段代码是在将0强制类型转换为这种函数指针类型，就意味着0地址处有这么一个函数
//	//3. (* (void (*)())0)() 对0地址进行解引用，去调用0地址处的这个函数
//
//	return 0;
//}


//函数调用 - no
//函数定义 - no
//函数声明 - ok


//void(*)(int);


//int main()
//{
//	//void (* signal(int, void(*)(int)) )(int);
//	//解释代码:
//	//这段代码是一次函数声明
//	//声明的这个函数的名字叫：signal
//	//signal函数有2个参数，第一个参数是int类型的，
//	// 第二个参数是一个函数指针类型（void(*)(int)）,该函数指针指向的函数参数是int，返回类型是void
//	//signal函数的返回类型也是一个函数指针类型(void(*)(int))，该函数指针指向的函数参数是int，返回类型是void
//	//
//	//void (*)(int) signal(int, void(*)(int));
//	return 0;
//}
//typedef void(*pf_t)(int) ;
//
//void test(int n)
//{
//
//}
//int main()
//{
//	//void (*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);//函数的声明
//	signal(100, &test);//函数调用
//	return 0;
//}
//
////函数定义
////void(*signal(int n, void(*p)(int)))(int)
////{
////	//.....
////	return p;
////}
//pf_t signal(int n, pf_t p)
//{
//	//...
//	return p;
//}


// typedef 类型重命名
// typedef unsigned int uint;
// typedef int* pint;

// int main()
// {
// 	unsigned int num = 100;
// 	uint num2 = 100;

// 	int *p1, *p2;
// 	pint p3,p4;


// 	return 0;
// }

// typedef int (*parr_t)[5];
// //parr_t 就是数组指针类型了
// int main()
// {
// 	int arr[5] = {0};
// 	int (*p)[5] = &arr;//p是数组指针变量，p的类型是int (*)[5]
// 	parr_t p2 = &arr;

// 	return 0;
// }

// int Add(int x, int y)
// {
// 	return x + y;
// }

// typedef int (*pf_t)(int, int);
// //pf_t就是函数指针类型了
// int main()
// {
// 	int (*pf)(int, int) = &Add;//pf是函数指针变量，pf的类型是int (*)(int, int)
// 	pf_t pf2 = &Add;

// 	return 0;
// }