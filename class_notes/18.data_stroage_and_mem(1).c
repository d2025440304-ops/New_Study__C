#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//unsigned char i = 0;
//
////unsigned char 的取值范围是0~255
//
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//
//    return 0;
//}


#include <stdio.h>
#include <time.h>

//int main()
//{
//    unsigned int i;// >=0
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//        Sleep(1000);
//    }
//    return 0;
//}


#include <stdio.h>
//X86环境 小端字节序
//
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%#x,%#x", ptr1[-1], *ptr2);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 9;
//    float* pFloat = (float*)&n;//int*
//    printf("n的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//
//    *pFloat = 9.0;
//    printf("num的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//    return 0;
//}



//大家自己在举例的时候，不要举特殊数字
//3.14
//11.0010101000010101010101010100000010000010101010010101010
//如果小数点后的位太多，就可能导致浮点数在内存中无法精确的保存
//
//
//int main()
//{
//	//5.5
//	float f = 5.5f;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//(-1)^0 * 1.011 * 2^2
//	//S=0
//	//M=1.011
//	//E=2
//	//2+127=129
//	//0100 0000 1011 00000000000000000000
//	//40 B0 00 00
//	//
//	return 0;
//}
//
//

//
//int main()
//{
//	float f1 = 0.4554f;
//	printf("%f\n", f1);
//
//	float f2 = 0.33333f;
//	printf("%f\n", f2);
//	return 0;
//}
//




//struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//	char id[13];
//	//...
//}b3, b4;//全局变量
//
//struct Book b2;//全局变量
//
//int main()
//{
//	struct Book b1;//局部变量
//	struct Book arr[5];//数组
//
//	return 0;
//}

//
//struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//	char id[13];
//	//...
//};
//
//
//int main()
//{
//	struct Book b1 = {"鹏哥C语言", "鹏哥", 18.8, "PG10001"};//局部变量
//	struct Book b2 = {.id = "PG10002", .author="鹏哥", .name="C语言程序设计", .price=88.8};
//	//.  ->
//
//	return 0;
//}


//匿名结构体类型
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//	return 0;
//}
//


//struct 
//{
//	char c;
//	int i;
//	double d;
//} s = {'x', 100, 3.14};
//
//int main()
//{
//	printf("%c %d %lf\n", s.c, s.i, s.d);
//
//	return 0;
//}


//struct
//{
//	char c;
//	int i;
//	double d;
//}s;
//
//struct
//{
//	char c;
//	int i;
//	double d;
//}* ps;
//
//int main()
//{
//	ps = &s;
//	return 0;
//}

//typedef struct
//{
//	char c;
//	int i;
//	double d;
//}S;
//
//int main()
//{
//	S s;
//	return 0;
//}
//



//typedef struct Node
//{
//	int data;//数据
//	struct Node* next;//指针
//}Node;

//struct Node
//{
//	int data;//数据
//	struct Node* next;//指针
//};
//
//typedef struct Node Node;


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//匿名的结构体类型是不能实现这种结构体自引用的效果的~

//int main()
//{
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}


struct S
{
	char c1;//1
	int i;//4
	char c2;//1
};

int main()
{
	struct S s = { 0 };
	printf("%zd\n", sizeof(s));//?

	return 0;
}







