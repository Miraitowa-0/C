#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>

//用枚举列举可能选择
enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW
};

//个人信息类型
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个元素
	int size;//记录当前已有的元素个数
};

//函数声明
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact *ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
