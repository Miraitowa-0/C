#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//ͨѶ¼����
//�ܴ��1000����Ϣ����Ϣ���������֣����䣬�Ա𣬵绰����ַ
//ͨѶ¼���ܣ�
//��ɾ�Ĳ飬��ʾ������.....
void menu()
{
	printf("*****************************\n");
	printf("*  1.add	  2.del	    *\n");
	printf("*  3.search	  4.modify  *\n");
	printf("*  5.show	  0.exit    *\n");
	printf("*****************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼ ����1000��Ԫ�ص������size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�ͨѶ¼\n");
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
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	return 0;
}