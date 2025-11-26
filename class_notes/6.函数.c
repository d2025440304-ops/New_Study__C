#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//数组的内容打印出来呢？
//	//printf("%d\n", arr[2][4]);//[]下标引用操作符
//	//printf("%d\n", arr[1][3]);//[]下标引用操作符
//
//	//打印数组的所有元素
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//产生一个i
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
//	int arr[3][5] = { 0 };
//	
//	//输入数据
//	int i = 0;
//	for (i = 0; i < 3; i++) //产生行号
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++) //产生列号
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//打印数组的所有元素 - 输出
//	for (i = 0; i < 3; i++)
//	{
//		//产生一个i
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



//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7 };
//	int i = 0;
//	//打印数组的所有元素 - 输出
//	for (i = 0; i < 3; i++)
//	{
//		//产生一个i
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr1[10];
//	int arr2[5 + 8];
//	//int n = 10;
//	//int arr3[n];
//	int arr4[] = { 1,2,3,4,5,6,7 };//虽然没有直接指定数组的大小，编译器会根据数组的初始化内容来确定一个数组大小的
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int arr3[n];
//	//输入数据
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr3[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
//
// int main()
// {
// 	int n = 0;
// 	scanf("%d", &n);//输入n
// 	int arr3[n];
// 	输入数据
// 	int i = 0;

// 	for (i = 0; i < n; i++)
// 	{
// 		scanf("%d", &arr3[i]);
// 	}
// 	for (i = 0; i < n; i++)
// 	{
// 		printf("%d ", arr3[i]);
// 	}
// 	return 0;
// }


//welcome to bit!!!!!!!
//#####################
//w###################!
//we#################!!
//wel###############!!!
//....
//welcome to bit!!!!!!!
//
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//

//char arr[] = "abcdef";
//              [abccef\0]
//   



//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;//17
//	scanf("%d", &n);//我们要在数组arr中找到n中的数字
//	//1. 挨个找
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	int flag = 0;//没找到
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了,下标是:%d\n", i);
//			flag = 1;//找到了
//			break;
//		}
//	}
//	if(flag == 0)
//		printf("找不到\n");
//	
//
//	return 0;
//}


//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;//17
//	scanf("%d", &n);//我们要在数组arr中找到n中的数字
//	//折半查找/二分查找
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;//找不到
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}


//#include <math.h>
//
//int main()
//{
//	double r = sqrt(16.0);
//	printf("%f\n",  r);
//	printf("%.1f\n", r);
//
//	return 0;
//}

//函数的定义 - 创造函数出来
// int Add(int x, int y)
// {
// 	return x + y;
// }

// int main()
// {
// 	int a = 0;
// 	int b = 0;
// 	scanf("%d %d", &a, &b);
// 	//计算a和b的和
// 	//函数Add被使用的场景 - 函数的调用
// 	int c = Add(a, b);//函数调用
	
// 	printf("c = %d\n", c);

// 	return 0;
// }


//写一个函数，在屏幕上打印hehe

//返回类型是void，就表示函数不返回任何值
//void Print()
//{
//	printf("hehe\n");
//}
//参数部分的void表示这个函数不接受参数
//void Print(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	Print(100);
//	return 0;
//}