#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//struct S
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};

//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};


//struct S3
//{
//	double d;//8 8 8
//	char c;  //1 8 1
//	int i;   //4 8 4
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//struct S s = { 0 };
//	//struct S2 s2 = { 0 };
//	//struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%zd\n", sizeof(s4));//size_t
//
//	return 0;
//}

//#pragma pack(1)
//struct S
//{
//    char c1;//1 1 1
//    int i;  //4 1 1
//    char c2;//1 1 1
//};
//#pragma pack()
//
//
//int main()
//{
//    printf("%zd\n", sizeof(struct S));
//
//    return 0;
//}


//
//struct S
//{
//	int arr[1000];
//	int n;
//	double d;
//};
//
//void print1(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("%d ", tmp.n);
//	printf("%lf\n", tmp.d);
//}
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("%d ", ps->n);
//	printf("%lf ", ps->d);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5}, 100, 3.14 };
//	//print1(s);
//	print2(&s);
//
//	return 0;
//}


//位段式的结构
//struct S
//{
//	int _a:2;
//	int _b:5;
//	int _c:10;
//	int _d:30;
//};
//
//
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//
//	return 0;
//}

//
//
//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//
//int main()
//{
//    struct S s = { 0 };
//    s.a = 10;
//    s.b = 12;
//    s.c = 3;
//    s.d = 4;
//    printf("%zd\n", sizeof(s));
//    return 0;
//}
//
//

//
//struct A
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//
//
//int main()
//{
//    struct A sa = { 0 };
//    //scanf("%d", &(sa._b));//这是错误的
//
//    //正确的示范
//    int b = 0;
//    scanf("%d", &b);
//    sa._b = b;
//
//    return 0;
//}

//union Un
//{
//	char c;//1
//	int i; //4
//};
//
//
//int main()
//{
//	union Un u = {0};
//	printf("%zd\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}
//
//union Un
//{
//	char c;//1
//	int i; //4
//};
//
//
//int main()
//{
//	union Un u = { 0 };
//	u.i = 0x11223344;
//	u.c = 0x55;
//
//	return 0;
//}



//union Un
//{
//	char c[5];//5
//	int i; //4
//};
//
//
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));
//	return 0;
//}
//


//union Un
//{
//	short s[7];//14  2 8 2
//	int i; //4 8 4
//};
//
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));
//	return 0;
//}
//
//
//
//struct gift_list
//{
//    int stock_number;//库存量
//    double price; //定价
//    int item_type;//商品类型
//
//    union {
//        struct 
//        {
//            char title[20];//书名
//            char author[20];//作者
//            int num_pages;//页数
//        }book;
//        struct 
//        {
//            char design[30];//设计
//        }mug;
//        struct 
//        {
//            char design[30];//设计
//            int colors;//颜色
//            int sizes;//尺寸
//        }shirt;
//    }item;
//};
//
//int main()
//{
//    struct gift_list gl;
//    
//    return 0;
//}


//写一个程序，判断当前机器是大端？还是小端？

//int check_sys()
//{
//	int n = 1;
//	return *(char*)&n;
//}

//联合体
// int check_sys()
// {
// 	union Un
// 	{
// 		char c;
// 		int i;
// 	}u;
// 	u.i = 1;
// 	return u.c;//小端：返回1，大端：返回0
// }

// int main()
// {
// 	int ret = check_sys();//小端：返回1，大端：返回0
// 	if (ret == 1)
// 		printf("小端\n");
// 	else
// 		printf("大端\n");
// 	return 0;
// }