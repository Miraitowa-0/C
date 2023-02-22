#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __SEQLIST__H__
#define __SEQLIST__H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//动态顺序表
typedef int SQDataType;
typedef struct SeqList
{
	SQDataType* a;
	int size;//有效数据个数
	int capacity;//容量
}SL;

//初始化 销毁 打印  等接口函数
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);
void SeqListPrint(SL* ps);

//头插 尾插 头删 尾删 随机插入 随机删除 查找 修改
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPopFront(SL* ps);
void SeqListPopBack(SL* ps);
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
int SeqListFind(SL* ps, SQDataType x);
void SeqListModify(SL* ps, int pos, SQDataType x);
#endif 
