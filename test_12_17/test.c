#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//ɨ��
	//��������
	char mine[ROWS][COLS] = { 0 };//11*11������
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}
void menu()
{
	printf("*********************\n");
	printf("**	1.play	   **\n");
	printf("**	0.exit	   **\n");
	printf("*********************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("����Ƿ�������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}