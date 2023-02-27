#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


void TestSList1()
{
	SLTNode* plist = NULL;
	//址传递 传plist的地址
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

	//想在3的前面插入一个30
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
	printf("**  1.插入，      2.删除       **\n");
	printf("**  3.头删，	  4.尾删       **\n");
	printf("**  7.查找，	  8.打印       **\n");
	printf("**				 -1.退出       **\n");
	printf("*********************************\n");
	printf("请输入你的操作选项:");
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
			printf("请输入你要插入的数据，以-1结束\n");
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
			printf("请输入你要删除的数据下标：");
			break;
		}
		
	}*/
	TestSList3();
	return 0;
}