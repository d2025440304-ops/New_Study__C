#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//	//      double
//	int a = (int)3.6;
//	printf("%d\n", a);
//	return 0;
//}
//
//


//
//int main()
//{
//	//     
//	int a = (int)3.14f;
//	printf("%d\n", a);
//	return 0;
//}
//


// int main()
// {
// 	printf("hello \nworld\n");
// 	return 0;
// }


//int main()
//{
//	printf("there are 3 apples\n");
//
//	printf("there are %d apples\n", 3);
//	printf("there are %d apples\n", 10);
//	printf("there are %d apples\n", 20);
//
//	return 0;
//}

//int main()
//{
//	printf("zhangsan will come tonight\n");
//	printf("%s will come tonight\n", "lisi");
//	printf("%s will come tonight\n", "cuihua");
//
//	return 0;
//}

//多个占位符的情况
//int main()
//{
//	printf("lisi says: it is 10 o'clock\n");
//	printf("%s says: it is %d o'clock\n", "ruhua", 20);
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", 10);
//	printf("%d\n", 15);
//	printf("%o\n", 15);
//	printf("%x\n", 15);
//
//	return 0;
//}

// int main()
// {
// 	printf("%d\n", 123);
// 	printf("%5d\n", 123);
// 	printf("%-5d-----\n", 123);

// 	printf("%5d\n", 1234567);


// 	return 0;
// }

//
// int main()
// {
// 	默认小数点后会有6位小数
// 	printf("%f\n", 123.456);
// 	printf("%12f\n", 123.456);

// 	printf("%+d\n", 12);
// 	printf("%+d\n", -12);

// 	printf("%f\n", 123.456);
// 	printf("%.3f\n", 123.456);

// 	printf("%f\n", 0.5);
// 	printf("%6.2f\n", 0.5);//  0.50
// 	printf("%*.*f\n", 8, 3, 0.5);
// 	printf("%s\n", "abcdef");
// 	printf("%.3s\n", "abcdef");
// 	float f = 123.456f;
// 	printf("%e\n", f);
// 	return 0;
// }


//int main()
//{
//	int score = 0;//初始化
//	printf("请输入成绩:");
//
//	//输入一个整数，到score变量中
//	scanf("%d", &score);//& - 取地址操作符， &score 取出score变量的地址
//
//	printf("score = %d\n", score);
//
//	return 0;
//}

//
//int main()
//{
//	int score = 0;
//	printf("%d\n", score);
//
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("i = %d\n", i);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0.0;
//	float y = 0.0;
//	//输入
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//	printf("%d %d %f %f\n", i, j, x, y);
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d", &x);
//    printf("%d\n", x);//-13
//
//    scanf("%f", &y);//0.45*10^12//4500000
//
//    printf("%f\n", y);
//    return 0;
//}


//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d %f", &x, &y);
//
//    printf("%d %f\n", x, y);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int r = 0;
//    printf("r = %d\n", r);
//    printf("a = %d b = %d c = %d\n", a, b, c);
//
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	scanf(" %c", &ch);//输入，%c时，scanf会从第一个开始，无论是不是空格
//	printf("===%c===\n", ch);
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = "xxxxxxxxx";//字符数组
//	scanf("%s", arr);  //arr是数组名，数组名本来就是地址
//	printf("%s\n", arr);
//
//	return 0;
//}

//
//int main()
//{
//	char arr[5] = {0};//字符数组
//	scanf("%4s", arr);  //arr是数组名，数组名本来就是地址
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	//输入
//	scanf("%d%d%d", &year, &month, &day);
//	
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	//输入
//	char ch1 = 0;
//	char ch2 = 0;
//	//scanf("%d/%d/%d", &year, &month, &day);//2025/1/15
//	scanf("%d%*c%d%*c%d", &year,  &month, &day);//2025/1/15
//
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}

//= 赋值
//== 判断相等

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	else
//		printf("%d是偶数\n", num);
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//		printf("正数\n");
//	else //<=0
//	{
//		if (num < 0)
//			printf("负数\n");
//		else
//			printf("0\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//		printf("正数\n");
//	else if (num < 0)
//		printf("负数\n");
//	else
//		printf("0\n");
//
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//	{
//		printf("非正数\n");
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)//>=18
//		printf("青年\n");
//	else if (age <= 59)//>=45
//		printf("中老年\n");
//	else if (age <= 89)//>=60
//		printf("老年\n");
//	else //>=90
//		printf("老寿星\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else //>=18
//	{
//		if (age <= 44)//>=18
//			printf("青年\n");
//		else //>44
//		{
//			if (age <= 59)//>=45
//				printf("中老年\n");
//			else //>=60
//			{
//				if (age <= 89)//>=60
//					printf("老年\n");
//				else //>=90
//					printf("老寿星\n");
//			}
//		}
//	}
//
//	return 0;
//}