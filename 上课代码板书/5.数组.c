#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//需要拿2~i-1之间的数字去试除i
//		//产生2~i-1之间的数字
//		int j = 0;
//		//i = 101
//		// j = 2~100
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数
//				break;
//			}
//		}
//		//1 2
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


// int main()
// {
// 	int i = 0;
// 	//少了一半的数据
// 	for (i = 101; i <= 200; i+=2)
// 	{
// 		int j = 0;
// 		int flag = 1;//假设i是素数
// 		for (j = 2; j <= i - 1; j++)
// 		{
// 			if (i % j == 0)
// 			{
// 				flag = 0;//i不是素数
// 				break;
// 			}
// 		}
// 		//1 2
// 		if (flag == 1)
// 			printf("%d ", i);
// 	}
// 	return 0;
// }

//sqrt 是一个库函数,是用来开平方的
//sqrt(16)--->4
//math.h
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	//少了一半的数据
//	for (i = 9; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数
//				break;
//			}
//		}
//		//1 2
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//试除法
//筛选法
//...
//《素数求解的N种境界》
//


//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//next:
//	printf("heihei\n");
//	return 0;
//}
//
//


//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}

//
//写一个关机程序
//1. 程序运行起来后，电脑在1分钟内关机
//2. 但是输入：我是猪，就取消关机
//
//system 函数：执行系统命令
//stdlib.h
//strcmp 是专门用来比较两个字符串的内容的
//strcmp函数返回0，表示两个字符串相等
//string.h/* */

// #include <stdlib.h>
// #include <string.h>

// int main()
// {
// 	char input[20] = {0};
// 	system("shutdown -s -t 60");
// again:
// 	printf("请注意，你的电脑在1分钟内关机，如果输入“我是猪”,就取消关机\n");
// 	scanf("%s", input); //数组名本来就是地址
// 	if (strcmp(input, "我是猪") == 0)  //两个字符串比较大小，不能使用==，应该使用strcmp来比较
// 	{
// 		system("shutdown -a");//取消关机
// 	}
// 	else
// 	{
// 		goto again;
// 	}
// 	return 0;
// }



//
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入“我是猪”,就取消关机\n");
//		scanf("%s", input); //数组名本来就是地址
//		if (strcmp(input, "我是猪") == 0)  //两个字符串比较大小，不能使用==，应该使用strcmp来比较
//		{
//			system("shutdown -a");//取消关机
//			break;
//		}
//	}
//
//	return 0;
//}
//
//
// #include <stdlib.h>
// #include <time.h>

// //自己创造的一个函数
// void menu()
// {
// 	printf("*************************\n");
// 	printf("***     1. play       ***\n");
// 	printf("***     0. exit       ***\n");
// 	printf("*************************\n");
// }

// void game()
// {
// 	//1. 电脑生成一个随机数
// 	//生成随机数
// 	int r = rand() % 100 + 1;
// 	//2. 猜数字 - 循环
// 	int guess = 0;
// 	system("cls");
// 	while (1)
// 	{
// 		printf("请猜数字:");
// 		scanf("%d", &guess);
// 		if (guess > r)
// 		{
// 			printf("猜大了\n");
// 		}
// 		else if (guess < r)
// 		{
// 			printf("猜小了\n");
// 		}
// 		else
// 		{
// 			printf("恭喜你，猜对了，数字是:%d\n", r);
// 			break;
// 		}
// 	}
// }

////只给你5次机会
//
//int main()
//{
//	int input = 0;
//	//设置随机数的生成起点
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束，退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//
//	return 0;
//}


//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	//srand(变化的值);
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//	return 0;
//}
//

//
#include <stdlib.h>
#include <time.h>

//自己创造的一个函数
void menu()
{
	printf("*************************\n");
	printf("***     1. play       ***\n");
	printf("***     0. exit       ***\n");
	printf("*************************\n");
}

void game()
{
	//1. 电脑生成一个随机数
	//生成随机数
	int r = rand() % 100 + 1;
	//2. 猜数字 - 循环
	int guess = 0;
	system("cls");
	int count = 5;
	while (count)
	{
		printf("你有%d次机会~\n", count);
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了，数字是:%d\n", r);
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("5次机会使用完，游戏失败\n");
		printf("正确的数字是:%d\n", r);
	}
}

//只给你5次机会

int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));

	do
	{
		menu();//打印菜单

		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束，退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);


	return 0;
}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//1 2 3 4 5 6 7 8 9 10
//	//1~100
//
//	return 0;
//}


//int main()
//{
//	int math[20];
//	char ch[5];
//	double data[25];
//
//	return 0;
//}


//int main()
//{
//	//int arr1[10] = {1, 2, 3, 4};//不完全初始化,剩余的值默认初始化为0
//	//int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//完全初始化
//	//int arr3[] = { 1,2,3 };
//
//	//int arr4[] = { 0 };
//
//	//数组如果初始化了，那么可以不指定数组的大小，数组的大小是根据初始化的内容来推算
//	//char arr1[6] = "abc";//a b c \0 0 0
//	//char arr2[6] = { 'a', 'b', 'c' };//a b c 0 0 0
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//int
//	printf("%zd\n", sizeof(a));//4
//	printf("%zd\n", sizeof(int));//4
//
//
//	int arr[10] = {0};//arr 这个数组的类型是什么？int [10]
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(int [10]));//40
//
//	//char ch[5];//ch 的类型char [5]
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	              //0 1 2 3 4 5 6 7 8 9
//	//printf("%d\n", arr[4]);//[] 下标引用操作符
//	//printf("%d\n", arr[9]);//[] 下标引用操作符
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)//0~9
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//&a - 取出a的地址
//&arr[i] - 取出arr[i]这个元素的地址
//& - 取地址操作符

//int main()
//{
//	int arr[10] = { 0 };
//	//打印这个数组每个元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组的总长度/一个元素的长度
//	//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < sz; i++)//0~9
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


// int main()
// {
// 	//int arr1[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};//完全初始化
// 	//int arr2[3][5] = { 1,2,3,4,5,6 };//二维数组其实是逐行初始化，如果是不安全初始化，剩余的元素默认初始化为0
// 	//int arr3[3][5] = { {1,2},{3,4},{5,6} };
// 	//int arr4[3][5] = { 0 };//

// 	int arr5[][5] = { 1,2,3,4,5,6,7,8,9,0 };
// 	//二维数组的如果初始化了，行是可以省略的，但是列不能省略
// 	return 0;
// }