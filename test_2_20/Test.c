#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void menu()
{
	printf("*********************************\n");
	printf("**  1.β�����ݣ�  2.ͷ������   **\n");
	printf("**  3.βɾ���ݣ�  4.ͷɾ����   **\n");
	printf("**  5.������룬  6.���ɾ��   **\n");
	printf("**  7.���ң�	  8.�޸�       **\n");
	printf("**  9.��ӡ���ݣ� -1.�˳�       **\n");
	printf("*********************************\n");
	printf("��������Ĳ���ѡ��:");
}
int main()
{
	SL s;
	SeqListInit(&s);
	int option = 0;
	int x = 0;
	int pos = 0;
	int ret = 0;
	while (option != -1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("��������Ҫ��������ݣ���-1����\n");
			do {
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("��������Ҫ��������ݣ���-1����\n");
			do {
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushFront(&s, x);
				}
			} while (x != -1);
			break;
		case 3:
			SeqListPopBack(&s);
			break;
		case 4:
			SeqListPopFront(&s);
			break;
		case 5:
			printf("������Ҫ�����λ�ú����ݣ�");
			scanf("%d %d", &pos, &x);
			SeqListInsert(&s, pos, x);
			break;
		case 6:
			printf("������Ҫɾ����λ�ã�");
			scanf("%d", &pos);
			SeqListErase(&s, pos);
			break;
		case 7:
			printf("������Ҫ���ҵ�Ԫ�أ�");
			scanf("%d", &x);
			ret = SeqListFind(&s, x);
			printf("�±�Ϊ%d\n", ret);
			break;
		case 8:
			printf("������Ҫ�޸�Ԫ�ص�λ�ú�ֵ��");
			scanf("%d %d", &pos, &x);
			SeqListModify(&s, pos, x);
			break;
		case 9:
			SeqListPrint(&s);
			break;
		default:
			break;
		}	
	}
	SeqListDestory(&s);
	return 0;
}