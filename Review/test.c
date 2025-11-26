#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//此文件的函数是调用；调用的前提是声明或定义；声明放在game.h的头文件中，这样以来就可以像printf，scanf一样调用他们；而定义放在tset.c的源文件中
//声明和定义都是形式参数，需要说明函数返回类型，参数类型（数组，整形，字符型等），
//调用不需要说明函数的返回类型，也不需要说明参数的类型，只需要给出实参
void menu()
{
	printf("********1.paly********\n");
	printf("********0.exit********\n");
	printf("请选择\n");
}
void game()
{
	char show[ROWS][CLOS];
	char mine[ROWS][CLOS];
	//函数的调用
	//初始化棋盘,将两个棋盘用同一个函数初始化，并定义一个set字符，可以更方便的传参给函数
	 CHU(show,ROWS,CLOS,'*');//调用函数数组传参时，实参只需要输入数组名，而不是数组中的某个元素
	 CHU(mine,ROWS,CLOS,'0');
	//打印棋盘
	 print(show,ROW,CLO);
	/* print(mine,ROW,CLO);*/
	//装炸弹
	 Set(mine,ROW,CLO);
	 //找周围有几个炸弹
	 find(mine,show,ROW,CLO);
}

int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择：\n");
			break;
		}
	} while (choice);
	return 0;
}