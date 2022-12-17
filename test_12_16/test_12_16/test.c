#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��Ϸ���㷨ʵ��
void game()
{
	int ret = 0;
	//������������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������ ȫ��Ϊ�ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		//�涨 4��״̬
		//���Ӯ - '*' ����Ӯ - '#' ƽ�� - 'Q' ���� - 'C'
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
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
}
//�˵�
void menu()
{
	printf("***********************\n");
	printf("**  1.play  0.exit   **\n");
	printf("***********************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}