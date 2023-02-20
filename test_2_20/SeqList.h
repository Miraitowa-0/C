#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __SEQLIST__H__
#define __SEQLIST__H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//��̬˳���
typedef int SQDataType;
typedef struct SeqList
{
	SQDataType* a;
	int size;//��Ч���ݸ���
	int capacity;//����
}SL;

//��ʼ�� ���� ��ӡ  �Ƚӿں���
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);
void SeqListPrint(SL* ps);

//ͷ�� β�� ͷɾ βɾ ������� ���ɾ�� ���� �޸�
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPopFront(SL* ps);
void SeqListPopBack(SL* ps);
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
int SeqListFind(SL* ps, SQDataType x);
void SeqListModify(SL* ps, int pos, SQDataType x);
#endif 
