#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


void TestSList1()
{
	SLTNode* plist = NULL;
	//ַ���� ��plist�ĵ�ַ
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);
	SListPushFront(&plist, 0);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
}
void TestSList2()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);
}
void TestSList3()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	
	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsert(&plist, pos, 10);
	}
	SListPrint(plist);

	//����3��ǰ�����һ��30
	pos = SListFind(plist, 3);
	if (pos)
	{
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);
}
void TestSList4()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

	pos = SListFind(plist, 4);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

	pos = SListFind(plist, 3);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

	pos = SListFind(plist, 2);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);
}

void menu()
{
	printf("*********************************\n");
	printf("**  1.���룬      2.ɾ��       **\n");
	printf("**  3.ͷɾ��	  4.βɾ       **\n");
	printf("**  7.���ң�	  8.��ӡ       **\n");
	printf("**				 -1.�˳�       **\n");
	printf("*********************************\n");
	printf("��������Ĳ���ѡ��:");
}
int main()
{
	/*SLTNode* plist = NULL;
	int operate = 0; 
	int x = 0;
	while (operate != -1)
	{
		menu();
		scanf("%d", &operate);
		switch (operate)
		{
		case 1:
			printf("��������Ҫ��������ݣ���-1����\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					SListPushFront(&plist, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("��������Ҫɾ���������±꣺");
			break;
		}
		
	}*/
	TestSList3();
	return 0;
}