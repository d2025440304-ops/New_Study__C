#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//合理的递归的两个条件
//1.有条件的递归，递归需要最终结束
//2.递归的过程需要越来越接近递归结束
//int main()
//{
//	//这是个典型的错误的递归，没有条件且无法结束
//	printf("hehe\n");//有可能会导致栈溢出
//	main();
//	return 0;
//}
// 



//分情况，当x大于0时，x！=x*（x-1)!
//将Fact想象成是已经求好的阶乘，Fact（x-1）
//int Fact(unsigned int x)
//{
//	if (x == 0)
//		return 1;
//	else if (x>0)//递归的条件
//		return x * Fact(x - 1);//向递归条件逼近
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int r = Fact(a);
//	printf("%d\n", r);
//	return 0;
//}
//


////顺位输出打印
//void print(int x)
//{
//	if (x > 9)//递归的条件
//	{
//		print(x / 10);//向递归结束靠近
//	}
//	else
//	printf("%d ", x % 10);//注意；不是else语句，如果是else语句,只会打印1，因为当递归返回时，若x大于了9，则只会执行if，而不执行else语句
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//求解第n个斐波那契数
//递归效率低，不如迭代
// int Fib(int n)
// {
// 	if (n == 1 || n == 2)
// 	{
// 		return 1;
// 	}
// 	else
// 		return Fib(n - 1) + Fib(n - 2);
// }
// int main()
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	int r = Fib(n);
// 	printf("%d", r);
// 	return 0;
// }




//迭代法 解决斐波那契数问题；
//int Fib(int n)
//{
//	int n1 = 1;
//	int n2 = 1;
//	int n3;
//	for (int i = 1; i <= n; i++)  //for循环写法
//	{
//		n3 = n1 + n2;
//		n1 = n2;
//		n2 = n3;
//	}
	//while (n > 2)      //while循环写法
	//{
	//	n3 = n1 + n2;
	//	n1 = n2;
	//	n2 = n3;
	//	n--;
	//}
//	return n3;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	return 0;
//}

//总结；递归是一种将复杂的事情通过分类简化成简单的思想
//但递归使用不当有可能会效率变得低下