#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void menu()
{
	printf("*********************************\n");
	printf("**  1.���룬      2.ɾ��       **\n");
	printf("**  3.���ң�	  4.�޸�       **\n");
	printf("**  5.��ӡ��     -1.�˳�       **\n");
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
			printf("��������Ҫɾ���������±꣺");
			scanf("%d", &x);
			SeqListErase(&s, x);
			break;
		case 3:
			printf("������Ҫ���ҵ����ݣ�");
			scanf("%d", &x);
			ret = SeqListFind(&s, x);
			printf("�±�Ϊ%d\n", ret);
			break;
		case 4:
			printf("������Ҫ�޸����ݵ��±���޸ĵ�ֵ��");
			scanf("%d %d", &pos, &x);
			SeqListModify(&s, pos, x);
			break;
		case 5:
			SeqListPrint(&s);
			break;
		default:
			break;
		}	
	}
	SeqListDestory(&s);
	return 0;
}