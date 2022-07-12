#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game1.h"
void menu()
{
	printf("***************************\n");
	printf("*****1.play  0.exit********\n");
	printf("***************************\n");
}

void game1()
{
	//数组存放棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		Playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//电脑下棋
	}
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game1();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}