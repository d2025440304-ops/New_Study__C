#include <stdio.h>

//声明了一个结构体类型
//struct Stu
//{
//	//1个或多个成员 - 这些成员都是用来描述学生的
//	char name[20];
//	int age;
//	char id[11];
//	float score;
//	//...
//} s6,s7,s8;//全局变量
//
//struct Stu s4;//全局变量
//struct Stu s5;//全局变量
//
//
//int main()
//{
//	int num = 0;
//	struct Stu s1 = {"zhangsan", 20, "2024010102", 85.5f};
//	struct Stu s2 = {.age=18, .name="wangcai",.score=95.5f,.id = "2025010102"};
//
//	struct Stu s3;//局部变量
//	return 0;
//}
//
//struct Peo
//{
//	char name[30];
//	int age;
//	char tele[12];
//};
//
//struct Ebook
//{
//	struct Peo data[100];//可以存放100个人的信息
//	int count;//当前已经存的个数
//};
//
//int main()
//{
//	struct Peo p1 = {"zhangsan", 20, "15598888888"};
//	struct Ebook eb = { {{"wangwu", 19, "13396668866"},{"cuihua", 18, "18696866688"}},  0};
//
//	//printf("%s\n", p1.name);
//	//printf("%d\n", p1.age);
//	//printf("%s\n", p1.tele);
//
//	printf("%s\n", eb.data[1].name);
//	printf("%d\n", eb.data[1].age);
//	printf("%s\n", eb.data[1].tele);
//	//. : 结构成员访问操作符
//	//结构体变量.结构体成员
//
//	return 0;
//}
//
//


//int main()
//{
//	int a = 100;
//	long c = 100l;
//	long long b = 100ll;
//
//	float f = 3.14f;
//
//	return 0;
//}

//
//int main()
//{
//	char a = 20;//截断后存储到a中
//	//00000000000000000000000000010100
//	//00010100 - a
//	char b = 120;
//	//00000000000000000000000001111000
//	//01111000 - b
//	char c = a + b;
//	//00010100 - a
//	//00000000000000000000000000010100
//	//01111000 - b
//	//00000000000000000000000001111000
//	//
//	//00000000000000000000000000010100
//	//00000000000000000000000001111000
//	//00000000000000000000000010001100
//	//10001100 - c
//	//
//	printf("%d\n", c);
//	//%d - 以10进制的形式，打印一个有符号的整型(int)
//	//11111111111111111111111110001100 - 补码
//	//10000000000000000000000001110011
//	//10000000000000000000000001110100 - 原码
//	//-116
//	return 0;
//}
//
//

//
//#include <stdio.h>
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
////2 3 4 5 6 7 ....
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//
//    return 0;
//}
//

//表达式5
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//
//    printf("%d\n", ret);
//    printf("%d\n", i);
//
//    return 0;
//}
//

//int main()
//{
//	int a = 10;
//	int * p = &a;//编号 = 地址 = 指针
//
//	//p被称为指针变量，理解为：存放指针的变量
//	//指针变量也是变量,指针变量是专门用来存放地址的
//	//
//	//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	//int* p = &a;
//	//*p = 0;
//
//	a = 0;
//
//	printf("%d\n", a);//0
//
//	return 0;
//}


// int main()
// {
// 	char* pc;
// 	printf("%zu\n", sizeof(pc));
// 	printf("%zu\n", sizeof(char*));
// 	printf("%zu\n", sizeof(int*));
// 	printf("%zu\n", sizeof(short*));
// 	printf("%zu\n", sizeof(long*));
// 	printf("%zu\n", sizeof(long long*));
// 	printf("%zu\n", sizeof(float*));
// 	printf("%zu\n", sizeof(double*));

// 	return 0;
// }