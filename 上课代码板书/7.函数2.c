#include <stdio.h>

//函数的定义
//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}

//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    //输入
//    scanf("%d %d", &a, &b);
//    //调用加法函数，完成a和b的相加
//    //求和的结果放在r中
//    int r = Add(a, b); //函数的调用
//    //输出
//    printf("%d\n", r);
//    return 0;
//}

//
//void test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("hehe\n");
//	if (n == 5)
//		return;
//	printf("haha\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//void test()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			return;
//		printf("%d ", i);
//	}
//	//
//	printf("hehe\n");
//}


//int test()
//{
//	int n = 5;
//	if (n % 2 == 1)
//		return 3.5;
//	else
//		return -3.5;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//int test()
//{
//	int n = 6;
//	if (n % 2 == 1)
//		return 1;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//函数的返回类型默认是int
//int test()
//{
//	//...
//	return 1;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}


//int test(void)
//{
//	printf("hehe\n");
//	int a = 3 + 5;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//void set_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//写一个函数将数组arr的内容全部置为-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

//void Print(int brr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", brr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	//写一个函数打印数组的内容
//	Print(arr, 3, 5);
//	return 0;
//}

// 如果是闰年，就返回1，不是闰年就返回0

// int is_leap_year(int y)
// {
// 	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
// 		return 1;
// 	else
// 		return 0;
// }

// int get_days_of_month(int y, int m)
// {
// 	int days[13] = { 0, 31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30 ,31 };
// 	//               0  1   2   3   4   5   6   7   8   9   10  11  12
// 	int d = days[m];
// 	//判断闰年
// 	if (is_leap_year(y) && m == 2)
// 		d += 1;
// 	return d;
// }

// int main()
// {
// 	int year = 0;
// 	int month = 0;
// 	scanf("%d %d", &year, &month);
// 	//计算天数
// 	int d = get_days_of_month(year, month);
// 	printf("%d\n", d);

// 	return 0;
// }

// #include <string.h>

//int main()
//{
//	size_t len = strlen("abc");
//	printf("%zd\n", len);
//
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", strlen("abcdef"));//函数的链式访问
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//	//43 3 2 
//	return 0;
//}
//

//函数的使用要保证：先声明后使用
//int is_leap_year(int y);//函数的声明
////函数的声明是在说：
////函数的名字，参数，返回类型是什么
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//
//	if (is_leap_year(y)) //函数的调用
//		printf("闰年\n");
//	else
//		printf("不是闰年\n");
//
//	return 0;
//}
//
////函数的定义
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}


//函数的定义 - 是一种特殊的声明
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//
//	if (is_leap_year(y)) //函数的调用
//		printf("闰年\n");
//	else
//		printf("不是闰年\n");
//
//	return 0;
//}
//


//要完成两个整数的加法操作
//
//#include "add.h"
//
////导入静态库
//#pragma comment(lib, "Add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//计算
//	
//	int c = Add(a, b);
//	
//	printf("%d\n", c);
//
//	return 0;
//}
//

//
//void test()
//{
//	int b = 100;
//	printf("1:b = %d\n", b);
//}
//
//int main()
//{
//	printf("1:b = %d\n", b);//err
//	{
//		int a = 10;
//		printf("1: %d\n", a);
//	}
//	printf("2: %d\n", a);//err
//
//	return 0;
//}


//声明来自外部的符号
//extern int g_val;
//
//void test()
//{
//	printf("2: g_val = %d\n", g_val);//ok
//}
//
//int main()
//{
//	printf("1: g_val = %d\n", g_val);//ok
//	test();
//	return 0;
//}


//void test()
//{
//	static int n = 1;
//	n++;
//	printf("%d ", n);
//}
//
//int main()
//{
//	int i = 0;
//	//printf("n = %d\n", n);//err
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}
//

extern int g_val;
//全局变量默认是代码外部链接属性,在其他的.c文件中适当的声明是可以直接使用的
//但是被static修饰后
//这种外部链接属性就变成了内部链接属性,这个变量只能在自己所在的.c文件内部使用
//其他.c文件无法使用

////声明来自外部的函数
//extern void test();
//
//int main()
//{
//	//printf("%d\n", g_val);
//	test();
//	return 0;
//}
//
//



int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}

	return 0;
}
