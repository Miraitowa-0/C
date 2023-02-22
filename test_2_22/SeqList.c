#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"
//初始化
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
//检查扩容
void SeqListCheckCapacity(SL* ps)
{
	//满了就要扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}
//头插
void SeqListPushFront(SL* ps, SQDataType x)
{
	// 1、初始条件
	// 2、结束条件
	// 3、迭代过程
	/*SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;*/
	SeqListInsert(ps, 0, x);
}
//尾插
void SeqListPushBack(SL* ps, SQDataType x)
{
	/*SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;*/
	SeqListInsert(ps, ps->size, x);
}
//头删
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	/*int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;*/
	SeqListErase(ps, 0);
}
//尾删
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	//ps->size--;
	SeqListErase(ps, ps->size - 1);
}
//随机插入
void SeqListInsert(SL* ps, int pos, SQDataType x)
{
	assert(pos <= ps->size);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
//随机删除
void SeqListErase(SL* ps, int pos)
{
	assert(pos < ps->size);
	int start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}
//查找
int SeqListFind(SL* ps, SQDataType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
//修改
void SeqListModify(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;
}
//打印
void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//销毁
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}