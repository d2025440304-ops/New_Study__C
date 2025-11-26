#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//
//	char* pa = &a;//int*
//	*pa = 0;
//
//	//double* pd = &a;
//	//*pd = 0;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*  pa = &a;
//	char* pc = &a;//int*
//	printf("pa  = %p\n", pa);
//	printf("pa+1= %p\n", pa+1);
//
//	printf("pc  = %p\n", pc);
//	printf("pc+1= %p\n", pc+1);
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	char* pc = &a;
//
//	char ch = 'w';
//	void* pv = &a;
//	pv = &ch;
//
//	//*pv = 'e';//err
//	//pv = pv + 1;//err
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//拿到第一个元素的地址
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;//p = p+1;
//	}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//拿到第一个元素的地址
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//拿到第一个元素的地址
//	int* p = &arr[0];
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//拿到第一个元素的地址
//	int* p = &arr[sz-1];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	//printf("%s\n", arr);
//	char* pc = &arr[0];
//	while (*pc != '\0')
//	{
//		printf("%c", *pc);
//		pc++;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	char* pc = &arr[0];
//	while (*pc)
//	{
//		printf("%c", *pc);
//		pc++;
//	}
//	return 0;
//}

//
//|指针-指针|:得到的是两个指针之间的元素个数
//前提：两个指针指向了同一块空间,否则不能相减
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%lld\n", &arr[9] - &arr[0]);
//	printf("%lld\n", &arr[0] - &arr[9]);
//	
//	return 0;
//}

//想一个函数，求字符串的长度
#include <string.h>

//size_t my_strlen(char* p)
//{
//	size_t count = 0;//计数器
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//size_t my_strlen(char* p)
//{
//	char* start = p;
//	while (*p) //使用p，来找到字符串中的\0
//	{
//		p++;
//	}
//	return p - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//数组名其实也是数组首元素的地址
//	//arr == &arr[0]
//
//	printf("%zu\n", my_strlen(arr));
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印数组的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//

//int main()
//{
//	const int a = 10;
//	int arr[a];
//	//a = 20;
//	//printf("%d\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	const int a = 10;
//	//a = 20;
//	const int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//const在修饰指针变量的时候：
//const 可以放在*的左边,const限制的是pa指向的对象，也就是*pa不能给修改
//但是pa不受限制，也就是指针变量可以改变指向
//const 可以放在*的右边,const限制的是pa，也就是pa的指向不能改变了
//但是*pa不受限制，也就是说pa指向的内容，是可以通过pa来改变的


//int main()
//{
//	const int a = 10;
//	int b = 20;
//	const int * pa = &a;
//	//*pa = 20;//err
//	pa = &b;//ok
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	int b = 100;
//	int * const pa = &a;
//	//*pa = 20;//ok
//	pa = &b;//err
//	printf("%d\n", a);
//
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//a = 20
//
//	return 0;
//}
//
//int main()
//{
//	int* pa;
//	*pa = 20;//ok?
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = &arr[0];
//	int* p = arr;//arr是数组名，数组名是数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);//sz
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


// int* test()
// {
// 	int n = 100;
// 	//...
// 	return &n;//int*
// }
// int main()
// {
// 	int*p = test();
// 	printf("hehe\n");
// 	printf("%d\n", *p);

// 	return 0;
// }

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = 5;
//		p++;
//	}
//	p = NULL;
//	//现在又想使用p
//	p = arr;
//	if (p == NULL)
//	{
//		printf("p 是空指针\n");
//	}
//	else
//	{
//		//..
//	}
//	return 0;
//}


//int test()
//{
//	int n = 100;
//	//...
//	return n;//返回局部变量
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//}

//#define NDEBUG

#include <assert.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = NULL;
//	assert(pa != NULL);
//
//	printf("%d\n", *pa);
//
//	return 0;
//}
#include <string.h>

//字符串的长度>=0, size_t
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//
//	return 0;
//}
//

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


//int main()
//{
//	int a = 10;
//	//a = 20;
//	int * pa = &a;
//	*pa = 20;
//	return 0;
//}


//void Swap2(int* pa, int * pb)
//{
//	int z = 0;
//	z = *pa;//z = a
//	*pa = *pb;//a = b
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前: a = %d b = %d\n", a, b);
//	//
//	Swap2(&a, &b); //传址调用
//	printf("交换后: a = %d b = %d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", *p);
//	//1
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));//40?
//	//如果说arr是数组首元素的地址的话，那这里不是计算一个地址的大小，是4/8吗？
//	return 0;
//}

//%p - 专门用来打印地址的，是16进制的形式，前面的0不会省略

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%zd\n", sizeof(arr));//10*4 = 40
//
//	printf("arr       = %p\n", arr);//首元素的地址
//	printf("arr+1     = %p\n", arr+1);//首元素的地址
//
//	printf("&arr[0]   = %p\n", &arr[0]);//首元素的地址
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);//首元素的地址
//
//	printf("&arr      = %p\n", &arr);//数组的地址
//	printf("&arr+1    = %p\n", &arr+1);//数组的地址
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 0 };
//	//给数组中存放1 2 3 4 5 6 7 8 9 10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p);
//		p++;
//	}
//
//	p = arr;
//	//打印出数组的所有内容
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//给数组中存放1 2 3 4 5 6 7 8 9 10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);
//	}
//
//	//打印出数组的所有内容
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//给数组中存放1 2 3 4 5 6 7 8 9 10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//打印出数组的所有内容
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


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
//int main()
//{
//	int arr[10] = { 0 };
//	//给数组中存放1 2 3 4 5 6 7 8 9 10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	//打印出数组的所有内容
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", i[arr]);
//	}
//	return 0;
//}


//void test(int arr[10])//形参写成一维数组
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("2: %d\n", sz2);
//}

//
//void test(int* arr, int sz)//形参写成一维数组
//{
//	//int sz2 = sizeof(arr) / sizeof(arr[0]);//在函数内求参数部分的数组的元素个数是错误的
//	//printf("2: %d\n", sz2);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] ==> *(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("1: %d\n", sz1);
//
//	test(arr, sz1);//传的是一维数组
//
//	return 0;
//}
//

//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟内部的比较
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

// int count = 0;
// void bubble_sort(int arr[], int sz)
// {
// 	//趟数
// 	int i = 0;
// 	for (i = 0; i < sz - 1; i++)
// 	{
// 		//一趟内部的比较
// 		int flag = 1;//假设已经有序
// 		int j = 0;
// 		for (j = 0; j < sz - 1 - i; j++)
// 		{
// 			count++;
// 			if (arr[j] > arr[j + 1])
// 			{
// 				int tmp = arr[j];
// 				arr[j] = arr[j + 1];
// 				arr[j + 1] = tmp;
// 				flag = 0;
// 			}
// 		}
// 		if (flag == 1)
// 			break;
// 	}
// 	printf("count = %d\n", count);
// }


// void print_arr(int arr[], int sz)
// {
// 	int i = 0;
// 	for (i = 0; i < sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// }

// int main()
// {
// 	int arr[] = { 9,0,1,2,3,4,5,6,7,8 };
// 	//将arr中的数字排成升序
// 	//冒泡排序 - 两两相邻的元素进行比较
// 	int sz = sizeof(arr) / sizeof(arr[0]);
// 	bubble_sort(arr, sz);
// 	print_arr(arr, sz);
// 	return 0;
// }







