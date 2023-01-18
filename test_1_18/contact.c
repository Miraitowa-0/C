#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;//设置通讯录最初容量为3个元素
}
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	//检测当前通讯录容量
	//如果满了，就增加空间
	//如果没满，什么都不用干
	CheckCapacity(ps);
	printf("请输入名字：\n");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄：\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别：\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话：\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址：\n");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		//打印标题
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-18s\n", "名字", "年龄", "性别", "电话", "地址");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			//打印内容
			printf("%-6s\t%-2d\t%-4s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//FindByName()查询函数 查询名字所对应的下标
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//找到 返回下标i
		}
	}
	return -1;//找不到 返回-1
}

void DelContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要删除的名字：");
	scanf("%s", &name);
	//1.查找要删除的人 名字在哪个位置
	//找到了返回名字所对应元素的下标
	//找不到返回-1
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要查询的名字：");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		////打印
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-18s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-6s\t%-2d\t%-4s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}

}

void ModifyContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要修改的名字：");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改人信息不存在\n");

	}
	else
	{
		printf("请输入名字：\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：\n");
		scanf("%s", ps->data[pos].addr);
		ps->size++;
		printf("修改成功\n");
	}
}

void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;

}