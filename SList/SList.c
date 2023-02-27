#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//��ӡ
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
//���ٿռ�
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("����ԭ��");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//β��
							//pphead�Ƕ���ָ�� ���plist�ĵ�ַ
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		// ��β����ָ��
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//β��������½��
		tail->next = newnode;
	}
}
//ͷɾ
void SListPopFront(SLTNode** pphead)
{
	//��һ��, �����ڶ�������ַ
	SLTNode* next = (*pphead)->next;
	//�ڶ���,�ͷŵ�һ�����
	free(*pphead);
	//������,���ӵڶ���
	*pphead = next;
}
//βɾ
void SListPopBack(SLTNode** pphead)
{
	if (*pphead == NULL)// 1����
	{
		free(*pphead);
		*pphead=NULL;
		return;
	}
	else if ((*pphead)->next == NULL)// 2��һ���ڵ�
	{
		free(*pphead);
		*pphead = NULL;
	}
	else// 3��һ�����ϵĽڵ�
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
//���㵥����ĳ���
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
//����
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
//����
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
//ɾ��
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
//����
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