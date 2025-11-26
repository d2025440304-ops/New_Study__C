#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //输入输出相关的函数
//#include <string.h>//字符串相关的函数
//
//int main()
//{
//	//"abcdef";
//	//库函数：strlen - 统计的是字符串中\0之前的字符个数
//	//string length - 求字符串长度的一个函数
//	int len = strlen("abc");//a b c d e f \0
//	printf("%d\n", len);
//
//	return 0;
//}


//#include <stdio.h> //输入输出相关的函数
//#include <string.h>//字符串相关的函数
//
//int main()
//{
//	//\129 
//	int len = strlen("c:\test\129\test.c");
//	printf("%d\n", len);
//
//	return 0;
//}

//
//#include <stdio.h> //输入输出相关的函数
//#include <string.h>//字符串相关的函数
//
//int main()
//{
//	;//空语句
//	int len = strlen("c:\test\129\test.c");
//	3 + 5;//表达式语句
//	printf("hehe");//函数调用语句
//
//	return 0;
//}

/*
int main()
{
	
	int a = 10;//创建一个整型变量，名字叫a，并赋值10
	int b = 20;
	
	return 0;
}
*/


//Ctrl+K+C - 注释
//Ctrl+K+U - 取消注释
//int main()
//{
//	//后面就是注释的内容
//	//
//	//
//	return 0;
//}

//#include <stdbool.h>
//
//int main()
//{
//	//_Bool flag = false;
//	bool flag = true;
//	if (flag)
//		printf("I like C\n");
//
//	return 0;
//}

//sizeof计算的结果是 size_t 类型的
//size_t类型的值，打印的时候使用%zd
//int main()
//{
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//}


//int main()
//{
//	//int num = 100;
//	//printf("%zd\n", sizeof(int));
//	//printf("%zd\n", sizeof(num));
//	//printf("%zd\n", sizeof num );
//
//	short s = 10;
//	int num = 100;
//	printf("%zd\n", sizeof(s = num + 2));
//	printf("%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	signed int num;//正、负、0
//	unsigned int age;//0、正
//
//	//字符类型也属于整型家族
//	signed char ch1 = 'x';
//	unsigned char ch2;
//
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	num = -10;
//	//对于int类型的数据打印应该使用%d
//	printf("%d\n", num);
//
//	unsigned int num2 = 100;
//	num2 = -100;
//	//对于unsigned int类的数据打印应该使用%u
//	printf("%u\n", num2);
//
//	return 0;
//}
//

//#include <limits.h>
//
//int main()
//{
//	printf("%d\n", INT_MAX);
//	return 0;
//}

#include <stdbool.h>

//变量的名字
//1. 有意义
//2. 变量的名字是由字母、数字、下划线组成
//3. 但不是不能以数字开头
//int main()
//{
//	int a;
//	int b;
//
//	unsigned int age = 18;//初始化
//	double price = 55.5;//初始化
//	double weight = 86.5;//初始化
//	bool is_ok = true;
//	int _2b;//
//
//	return 0;
//}
//

//int num2 = 100;//全局变量
//
//void test()
//{
//	printf("test(): %d\n", num2);
//}
//
//int main()
//{
//	printf("%d\n", num2);
//	{
//		int num1 = 10;//局部变量
//	}
//	printf("%d\n", num2);
//	test();
//
//	return 0;
//}


//#include <stdio.h>
//
//int n = 1000;
//
//int main()
//{
//	int n = 10;
//	printf("%d\n", n);//打印的结果是多少呢？
//
//	return 0;
//}


//int main()
//{
//	//printf("%d\n", 1 + 1);
//	int a = 1;
//	int b = 100;
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 1 - 1);
//	int a = 1;
//	int b = 100;
//	int c = a - b;
//	printf("%d\n", c);
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", 5 * 5);
//	int a = 5;
//	int b = 6;
//	printf("%d\n", a * b);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", 6 / 4);//1...2
//	//  / (除号)的两端如果都是整数，执行的是整数除法
//	printf("%f\n", 6.0 / 4.0);//1.5
//	printf("%lf\n", 6 / 4.0); //1.5
//	//  / (除号)的两端如果出现了浮点数，才执行的是浮点数除法
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int score = 5;
//	score = (score / 20.0) * 100;
//	printf("%d\n", score);
//
//	return 0;
//}
////
//int main()
//{
//	printf("%d\n", 6 / 4);//1...2
//	printf("%d\n", 6 % 4);//1...2
//	printf("%d\n", 10 % 3.0);//3...1
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", 11 % -5); // 1
//	printf("%d\n", -11 % -5); // -1
//	printf("%d\n", -11 % 5); // -1
//	return 0;
//}

//
//int main()
//{
//	//int num = 10;//初始化
//	//num = 20;//赋值， 这里的=就是赋值操作符
//
//
//	//int a = 3;
//	//int b = 5;
//	//int c = 0;
//
//	////c = b = a + 3;//连续赋值，从右向左依次赋值的。
//
//	//b = a + 3;
//	//c = b;
//
//	//printf("%d\n", c);
//	//printf("%d\n", b);
//
//
//	int a = 10;
//	//a = a + 5;
//	//a += 5;//复合赋值
//
//	//a = a - 2;
//	a -= 2;
//
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//a = a + 1;//1
//	//a += 1;
//	++a;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++; //后置++：先使用，后+1
//	//b = a, a = a+1;
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//10
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a; //前置++：先+1，后使用
//	//a = a+1, b = a;
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//11
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = --a; //前置--：先-1，后使用
//	//a = a-1, b = a;
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//9
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a--; //后置--：先使用，后-1
//	//b = a, a = a-1;
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//10
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//
//
//	return 0;
//}


//int main()
//{
//	int a = +10;
//	printf("%d\n", a);
//	printf("%d\n", +a);
//
//	return 0;
//}

// int main()
// {
// 	int a = -10;
// 	printf("%d\n", a);
// 	printf("%d\n", -a);
// 	printf("%d\n", +a);


// 	return 0;
// }