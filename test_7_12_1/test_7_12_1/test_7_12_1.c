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
	
	//������������Ϣ
	char board[ROW][COL] ;
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	char ret = 0;
	//����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		//ret = IsWin(board, ROW, COL);
		//if (ret !='C');
		//{
		//	break;
		//}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
	//	ret = IsWin(board, ROW, COL);
	//	if (ret != 'C');
	//	{
	//		break;
	//	}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game1();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}