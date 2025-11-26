#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//int a = 0;
//int b = 2;
//if (a == 1)
//if (b == 2)
//printf("hehe\n");
//else
//printf("haha\n");
//return 0;
//}


//int main()
//{
//	int a=0;
//	int b = 0;
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{ }
//	return 0;
//}

//
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int c = (a == b);
//	printf("%d\n", c);
//	return 0;
//}

//判断两个数据是否相等的时候
//如果其中有一个常量的时候，常量建议写在左边

//int main()
//{
//	int k = 5;
//	if (3 == k)
//		printf("hehe\n");
//
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b = 8;
//	int c = 5;
//	if (a < b && b < c)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}
//
//

//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//	{
//		printf("青年\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	if (a == 5)
//		b = 3;
//	else
//		b = -3;
//
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	b = (a == 5 ? 3 : -3);
//
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = 0;
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//
//	m = (a > b ? a : b);
//
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//
//	//if (flag)  //flag 如果为真，就打印
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//if (!flag)  //flag 如果为假，就打印
//	//{
//	//	printf("hehe\n");
//	//}
//
//	if (flag == 0)  //flag 如果为假，就打印
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春天\n");
//
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("冬天\n");
//
//	return 0;
//}
//



//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("闰年\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
//	{
//		printf("闰年\n");
//	}
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++ || ++b || d++;
//    
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//    
//    return 0;
//}
//


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("余数是0\n");
//	else if(n % 3 == 1)
//		printf("余数是1\n");
//	else 
//		printf("余数是2\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误~\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	int n = 1; //循环变量的初始化
//
//	while (n <= 10) //循环结束判断
//	{
//		printf("%d ", n);
//
//		n++; //循环变量的调整
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;//1 2 3 ~ 10
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;//求和
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i里边的值是不是3的倍数
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;//求和
//	for (i = 3; i <= 100; i+=3)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int n = 1; //循环变量的初始化
//
//	while (n <= 0) //循环结束判断
//	{
//		printf("%d ", n);
//
//		n++; //循环变量的调整
//	}
//
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//123
//	
//	int cnt = 0;//计数器
//	
//	while (num > 0)
//	{
//		num /= 10;//0
//		cnt++;//3
//	}
//	printf("%d\n", cnt);
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//123
//
//	int cnt = 0;//计数器
//
//	do
//	{
//		num /= 10;//0
//		cnt++;//3
//	} while (num);
//
//	printf("%d\n", cnt);
//
//	return 0;
//}


//int main()
//{
//	int n = 1; //循环变量的初始化
//
//	while (n <= 10) //循环结束判断
//	{
//		if (n == 5)
//			break;
//
//		printf("%d ", n);
//
//		n++; //循环变量的调整
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int n = 1; //循环变量的初始化
//
//	while (n <= 10) //循环结束判断
//	if (n == 5)
//			n++; //循环变量的调整
//		continue;//结束此{
//
//		次循环
//
//		printf("%d ", n);
//	}
//
//	return 0;
//}
//

//int main()
//{
//	int i = 0;//1 2 3 ~ 10
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;//1 2 3 ~ 10
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	//for (初始化; 判断; 调整)
//	//{
//
//	//}
//	//对于for循环，初始化部分，判断部分，调整部分都可以省略
//	//判断部分省略掉，就意味着判断恒为真
//	for (; ;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//
//


int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}
