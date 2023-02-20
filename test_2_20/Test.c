#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void menu()
{
	printf("*********************************\n");
	printf("**  1.尾插数据，  2.头插数据   **\n");
	printf("**  3.尾删数据，  4.头删数据   **\n");
	printf("**  5.随机插入，  6.随机删除   **\n");
	printf("**  7.查找，	  8.修改       **\n");
	printf("**  9.打印数据， -1.退出       **\n");
	printf("*********************************\n");
	printf("请输入你的操作选项:");
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
			printf("请输入你要插入的数据，以-1结束\n");
			do {
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("请输入你要插入的数据，以-1结束\n");
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
			printf("请输入要插入的位置和数据：");
			scanf("%d %d", &pos, &x);
			SeqListInsert(&s, pos, x);
			break;
		case 6:
			printf("请输入要删除的位置：");
			scanf("%d", &pos);
			SeqListErase(&s, pos);
			break;
		case 7:
			printf("请输入要查找的元素：");
			scanf("%d", &x);
			ret = SeqListFind(&s, x);
			printf("下标为%d\n", ret);
			break;
		case 8:
			printf("请输入要修改元素的位置和值：");
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