//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是一级指针
//
//	int * * pp = &p;
//
//	int** * ppp = &pp;
//	int**** pppp = &ppp;
//	//.....
//	return 0;
//}
//

//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是一级指针
//
//	int * * pp = &p;
//	printf("%p\n", *pp);
//	printf("%d\n", **pp);//10
//
//	printf("%p\n", &a);
//
//	return 0;
//}
//


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = { arr1, arr2, arr3 };
//
//	//打印数组
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
//
//	return 0;
//}
//


//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;//pc 是指针变量
//
//	char arr[10] = "abcdef";
//	char* p1 = arr;
//	*p1 = 'w';
//
//	const char * p2 = "abcdef";
//	//*p2 = 'w';//err
//
//	//%s 打印字符串的时候，需要提供起始地址
//
//	printf("%s\n", p1);
//	printf("%s\n", p2);
//	printf("%s\n", arr);
//
//	return 0;
//}
//



#include <stdio.h>

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
//        printf("str3 and str4 are same\n");//1
//    else
//        printf("str3 and str4 are not same\n");//2
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//整型指针
//
//	char ch = 'w';
//	char* pc = &ch;//字符指针
//	
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//取出的是数组的地址
//
//	//arr -- 数组首元素的地址
//
//
//	//int* p1[10];//p1是指针数组 - 存放指针的数组
//	//int (*p2)[10];//p2是指针变量，指向的是数组 --- 数组指针
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//
//	int* p1 = arr;
//	//int*    int*
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	int (*p2)[10] = &arr;
//	//int (*)[10]   int(*)[10]
//	printf("%p\n", p2);//&arr
//	printf("%p\n", p2+1);//&arr+1
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}


//不好的示范
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (* p)[10] = &arr;
//	//& * 
//	//*&arr == arr
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//
//	return 0;
//}
//

//void print(int arr[3][5], int r, int c)
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

//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));//arr[i][j]
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6}, {3,4,5,6,7} };
//	//数组名是数组首元素的地址
//	//1. &数组名
//	//2. sizeof(数组名)
//	//
//	print(arr, 3, 5);
//
//	return 0;
//}

//int** arr
//二级指针变量是用来存放一级指针变量的地址

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int ** ppa = &pa;
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//char* test(char c, int n)
//{
//	//...
//}
//
//int main()
//{
//	//printf("&Add = %p\n", &Add);
//	//printf("Add  = %p\n", Add);
//	//int arr[10] = {0};
//	//int (*pa)[10] = &arr;
//
//	//int (*pf)(int,int) = &Add;//pf是专门用来存放函数的地址的，pf就是函数指针变量
//	char* (*p)(char, int) = &test;
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (* pf)(int,int) = Add;
//
//	int c = Add(2, 3);//函数名调用
//	printf("%d\n", c);
//
//	int d = (*pf)(3, 4);//函数指针调用
//	printf("%d\n", d);
//	
//	int e = pf(4, 5);//函数指针调用
//	printf("%d\n", e);
//
//	return 0;
//}


//int main()
//{
//	( * ( void (*)() ) 0 )();//解释一下这段代码
//	//void (*)()-- 函数指针类型
//	//( void (*)() ) --		强制类型转换
//	//( void (*)() ) 0 -- 将0强制类型转换为void (*)()的函数指针类型
//	//这就意味着我们假设0 地址处放着无参，返回类型是void的函数
//	//最终是调用0地址处放的这个函数
//	//
//
//	//;
//	//0 -- int
//	//0x0012ff40   0
//
//	return 0;
//}

//typedef void(*pf_t)(int);//pf_t 就是 void(*)(int) 
//pf_t signal(int, pf_t)


//函数声明
//void (* signal( int, void(*)(int) ) )(int);
//void(*)(int) signal( int, void(*)(int) ) //err
//;
//
//typedef unsigned int u_int;
//
//typedef int* pint_t;
//
////int(*p)[5];//p是指针变量
//typedef int(*parr_t)[5] ; //parr_t 就是 int(*)[5]
//
//
//
//
//int main()
//{
//	parr_t pa1;
//	int(*pa2)[5];
//
//	pint_t p1;
//	int* p2;
//
//	u_int a1;
//	unsigned int a2;
//
//	return 0;
//}
//
//

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
////int (*)(int, int)
//
//int main()
//{
//	int (*pf1)(int, int) = Add;//pf1是函数指针变量
//	int (* pfarr[4])(int, int) = {Add, Sub, Mul, Div};//pfarr是函数指针数组
//	//8 4
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int r = pfarr[i](8, 4);
//		printf("%d\n", r);
//	}
//	return 0;
//}
//


//计算器
//完成整数的加、减、乘、除
// 
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1. add  2. sub   ****\n");
//	printf("****  3. mul  4. div   ****\n");
//	printf("****  0. exit          ****\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			z = Add(x, y);
//			printf("%d\n", z);
//			break;
//		case 2:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			z = Sub(x, y);
//			printf("%d\n", z);
//			break;
//		case 3:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			z = Mul(x, y);
//			printf("%d\n", z);
//			break;
//		case 4:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			z = Div(x, y);
//			printf("%d\n", z);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1. add  2. sub   ****\n");
//	printf("****  3. mul  4. div   ****\n");
//	printf("****  0. exit          ****\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	//函数指针的数组 - 转移表
//	int (*pfArr[5])(int, int) = { 0,   Add, Sub, Mul, Div };
//	//                            0    1    2    3    4   
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);//3
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			z = pfArr[input](x, y);
//			printf("%d\n", z);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误，重新输入\n");
//		}
//	} while (input);
//
//	return 0;
//}
//
//


// int Add(int x, int y)
// {
// 	return x + y;
// }

// int Sub(int x, int y)
// {
// 	return x - y;
// }

// int Mul(int x, int y)
// {
// 	return x * y;
// }

// int Div(int x, int y)
// {
// 	return x / y;
// }

// void menu()
// {
// 	printf("***************************\n");
// 	printf("****  1. add  2. sub   ****\n");
// 	printf("****  3. mul  4. div   ****\n");
// 	printf("****  0. exit          ****\n");
// 	printf("***************************\n");
// }

// void calc(int (*pf)(int, int))
// {
// 	int x = 0;
// 	int y = 0;
// 	int z = 0;
// 	printf("请输入两个操作数:");
// 	scanf("%d %d", &x, &y);
// 	z = pf(x, y);
// 	printf("%d\n", z);
// }

// int main()
// {
// 	int input = 0;

// 	do
// 	{
// 		menu();
// 		printf("请选择：");
// 		scanf("%d", &input);
// 		switch (input)
// 		{
// 		case 1:
// 			calc(Add);
// 			break;
// 		case 2:
// 			calc(Sub);
// 			break;
// 		case 3:
// 			calc(Mul);
// 			break;
// 		case 4:
// 			calc(Div);
// 			break;
// 		case 0:
// 			printf("退出计算器\n");
// 			break;
// 		default:
// 			printf("选择错误\n");
// 			break;
// 		}
// 	} while (input);

// 	return 0;
// }