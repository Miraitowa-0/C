#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;//�����Ժ��޸���������
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};
typedef struct SListNode SLTNode;//�ѽṹ�����Ķ�һ��

// ����ı������ͷָ�룬��һ��ָ��
void SListPrint(SLTNode* phead);
int SListSize(SLTNode* phead);

// ���ܻ�ı������ͷָ�룬������ָ��
void SListPushBack(SLTNode** pphead, SLTDataType x);
void SListPushFront(SLTNode** pphead, SLTDataType x);
void SListPopBack(SLTNode** pphead);
void SListPopFront(SLTNode** pphead);
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//��posǰ�����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos);
void SListDestory(SLTNode** pphead);