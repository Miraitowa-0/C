#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void menu()
{
	printf("*********************************\n");
	printf("**  1.插入，      2.删除       **\n");
	printf("**  3.查找，	  4.修改       **\n");
	printf("**  5.打印，     -1.退出       **\n");
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
			printf("请输入你要删除的数据下标：");
			scanf("%d", &x);
			SeqListErase(&s, x);
			break;
		case 3:
			printf("请输入要查找的数据：");
			scanf("%d", &x);
			ret = SeqListFind(&s, x);
			printf("下标为%d\n", ret);
			break;
		case 4:
			printf("请输入要修改数据的下标和修改的值：");
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