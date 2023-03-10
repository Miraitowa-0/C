#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//通讯录需求：
//能存放1000人信息，信息包含：名字，年龄，性别，电话，地址
//通讯录功能：
//增删改查，显示，排序.....
//动态版通讯录
//默认可以存放3个人信息 当通讯录满的时候，进行扩容，每次增加2个空间
//文件版通讯录
void menu()
{
	printf("*****************************\n");
	printf("*  1.add	  2.del	    *\n");
	printf("*  3.search	  4.modify  *\n");
	printf("*  5.show	  6.sort    *\n");
	printf("*  7.save	  0.exit    *\n");
	printf("*****************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录 包含data指针，size，capacity
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			//销毁通讯录-释放动态开辟的内存
			SaveContact(&con);
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}