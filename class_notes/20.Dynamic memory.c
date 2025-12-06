#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//enum Color
//{
//	//三原色的可能取值 - 枚举常量
//	RED,
//	GREEN=5,//
//	BLUE//
//};
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	//enum Color color = RED;
//	//RED = 5;//err
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	enum Sex s = SECRET;
//
//	return 0;
//}


//enum Sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//int main()
//{
//	enum Sex s = MALE;
//
//	return 0;
//}

//
//#define MALE 0
//#define FEMALE 1
//#define SECRET 2


//int main()
//{
//	int sex = MALE;
//
//	return 0;
//}
//
//
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1. add    2.sub ****\n");
//	printf("****  3. mul    4.div ****\n");
//	printf("****  0. exit         ****\n");
//	printf("**************************\n");
//}
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//
//
//int main()
//{
//	int input = 0;
//	printf("请选择:>");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case ADD:
//		break;
//	case DIV:
//		break;
//	case MUL :
//		break;
//	case SUB:
//		break;
//	case EXIT:
//		break;
//	default:
//		break;
//	}
//	return 0;
//}


//#include <stdlib.h>
//
//int main()
//{
//	//20 个字节 - 存放5个整数
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//释放内存
//	free(p);//传递给free函数的是要释放的内存空间的起始地址
//	p = NULL;
//
//	return 0;
//}


//#include <stdlib.h>
//
//int main()
//{
//	//20 个字节 - 存放5个整数
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//
//	//释放内存
//	free(p);//err - p已经不是起始地址了
//	p = NULL;
//
//	return 0;
//}

//向内存申请5个整型的空间
#include <stdlib.h>
//
//int main()
//{
//	//int*p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	perror("malloc");
//	//	return 1;
//	//}
//
//
//	int* p = (int*)calloc(5, sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));//20
//	//1 2 3 4 5
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i+1;
//	}
//	//希望将空间调整为40个字节
//	int*ptr = (int*)realloc(p, 4000);
//	if (ptr != NULL) //调整成功
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		free(p);
//		p = NULL;
//	}
//	else //调整失败
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//realloc函数可以完成和malloc一样的功能
//
//
//int main()
//{
//	realloc(NULL, 20);//=== malloc(20);
//	return 0;
//}


//int main()
//{
//	int*p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//		perror("malloc()");
//	//..
//	return 0;
//}


//4.1 对NULL指针的解引用操作
#include <assert.h>

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	/*if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}*/
//
//	assert(p);
//	//
//	*p = 20;
//
//	return 0;
//}

//
//void test()
//{
//    int i = 0;
//    int* p = (int*)malloc(10 * sizeof(int));
//    if (NULL == p)
//    {
//        exit(EXIT_FAILURE);
//    }
//    for (i = 0; i <= 10; i++)
//    {
//        *(p + i) = i;//当i是10的时候越界访问
//    }
//    free(p);
//}
//
//
//int main()
//{
//    test();
//    return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//....
//
//	free(p);//4.3 对非动态开辟内存使用free释放
//	p = NULL;
//
//	return 0;
//}

//4.4 使用free释放一块动态开辟内存的一部分

//int main()
//{
//    int* p = (int*)malloc(100);
//    if (p == NULL)
//    {
//        return 1;
//    }
//    //
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        *p = i+1;
//        p++;
//    }
//    free(p);//这里的p不再是动态申请的内存的起始位置
//    p = NULL;
//
//	return 0;
//}

//4.5 对同一块动态内存多次释放

//void test()
//{
//    int* p = (int*)malloc(100);
//    //....
//    free(p);
//    free(p);//重复释放
//}
//
//
//int main()
//{
//    test();
//    return 0;
//}

//
//动态开辟内存忘记释放
//内存泄露
//
//
//void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        *p = 20;
//    }
//}
//
//int main()
//{
//    test();
//    //
//    while (1);
//}
//


//void test()
//{
//    int* p = (int*)malloc(100);
//    //使用
//    int n = 3;
//    if (n > 0)
//        return;
//
//    free(p);
//    p = NULL;
//}
//
//int main()
//{
//    test();
//    //
//    while (1);
//}
#include <string.h>

//void GetMemory(char** p)
//{
//    *p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//
//1. 内存泄露
//2. 程序崩溃
//  


//char* GetMemory()
//{
//    char* p = (char*)malloc(100);
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}


//char* GetMemory(void)
//{
//    char p[] = "hello world";
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//
//int* test()
//{
//	int n = 10;
//	return &n;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//
//	printf("%d\n", *p);
//
//	return 0;
//}
//

//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    //....
//    return 0;
//}


//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    str = NULL;
//
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//
//int main()
//{
//    Test();
//    return 0;
//}




//struct S
//{
//	char c;
//	int n;
//	int arr[];//柔性数组
//};


//struct S
//{
//	char c;
//	int n;
//	int arr[0];//柔性数组
//};

//
//struct S
//{
//	int n;//4
//	int arr[];//
//};
//
//int main()
//{
//	//printf("%zd\n", sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//调整空间
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+10*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//....
//
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
		return 1;
	
	ps->arr = (int*)malloc(5*sizeof(int));
	if (ps->arr == NULL)
		return 1;
	//使用
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}

	//调整数组大小
	int*ptr = (int*)realloc(ps->arr, 10*sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	//使用
	//...

	//释放
	free(ps->arr);
	free(ps);

	return 0;
}