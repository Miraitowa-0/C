#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//打印
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
//开辟空间
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("错误原因：");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
//头插
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//尾插
							//pphead是二级指针 存放plist的地址
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		// 找尾结点的指针
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//尾结点链接新结点
		tail->next = newnode;
	}
}
//头删
void SListPopFront(SLTNode** pphead)
{
	//第一步, 保留第二个结点地址
	SLTNode* next = (*pphead)->next;
	//第二步,释放第一个结点
	free(*pphead);
	//第三步,连接第二个
	*pphead = next;
}
//尾删
void SListPopBack(SLTNode** pphead)
{
	if (*pphead == NULL)// 1、空
	{
		free(*pphead);
		*pphead=NULL;
		return;
	}
	else if ((*pphead)->next == NULL)// 2、一个节点
	{
		free(*pphead);
		*pphead = NULL;
	}
	else// 3、一个以上的节点
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}
//计算单链表的长度
int SListSize(SLTNode* phead)
{
	SLTNode* cur = phead;
	int size = 0;
	while (cur->next)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
//查找
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	if (pos == *pphead)
	{
		SListPushFront(pphead,x);
	}
	else
	{
		SLTNode* newnode = BuySListNode(x);
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}
//删除
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	if (pos==*pphead)
	{
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}
//销毁
void SListDestory(SLTNode** pphead)
{
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}