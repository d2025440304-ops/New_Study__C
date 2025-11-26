#pragma once
//此文件的函数是定义
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define CLO 9
#define ROWS ROW+2
#define CLOS CLO+2
#define EZ 10
void print(char board[ROWS][CLOS], int row, int clo);
void Set(char board[ROWS][CLOS], int row, int clo);
void find(char mine[ROWS][CLOS], char show[ROWS][CLOS], int row, int clo);
