#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//此文件的函数是定义后不需要跟分号
void CHU(char board[ROWS][CLOS], int rows, int clos,char set)//board只是一个形参，是和实参 同样的数组，这里是为了区分名字而做出的改变
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < clos; j++)
		{
			board[i][j] = set;
		}
	}
}

void print(char board[ROWS][CLOS], int row, int clo)
{
	printf("--------开始扫雷游戏-----------\n");
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= clo; j++)
		{
			printf("%c ",board[i][j]);//形式参数，形式数组，可以是任何数组
		}
		printf("\n");
	}
}

void Set(char board[ROWS][CLOS], int row, int clo)
{
	int count = EZ;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % clo + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//static的作用是让函数的作用域尽在本源文件，而不被其他文件所调用
static int num (char board[ROWS][CLOS], int x, int y)
{
	return (board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1] + board[x][y - 1] + board[x][y + 1] + board[x + 1][y] + board[x + 1][y - 1] + board[x + 1][y + 1] - 8 * '0');
}


void find(char mine[ROWS][CLOS], char show[ROWS][CLOS], int row, int clo)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * clo- EZ)
	{
		printf("请输入你猜测的坐标(坐标之间用空格分开）:>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= clo)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				print(mine, ROW, CLO);
				break;
			}
			else
			{
				int count = num(mine, x, y);
				show [x][y] = count + '0';
				print(show, ROW, CLO);
				win++;
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}
	if (win == row * clo - EZ)
	{
		printf("通关，游戏结束\n");
		print(mine, ROW, CLO);
	}	
}
