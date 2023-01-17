#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//6. 柔性数组
//C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。
//例如：
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;


//6.1 柔性数组的特点：
//结构中的柔性数组成员前面必须至少一个其他成员。
//sizeof 返回的这种结构大小不包括柔性数组的内存。
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。
//例如：
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//int main()
//{
//	printf("%d\n", sizeof(type_a));//输出的就是4
//	return 0;
//}



//6.2 柔性数组的使用
//代码1
//struct st_type
//{
//	int i;
//	int arr[0];
//};
//int main()
//{
//	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 5 * sizeof(int));
//	//动态内存开辟了 4 + 5*4 = 24 个字节内存
//	if (ps != NULL)
//	{
//		ps->i = 100;
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;
//		}
//	}
//	struct st_type* ptr=realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}



//代码2
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//int main()
//{
//	int i = 0;
//	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
//  //这样柔性数组成员a，相当于获得了100个整型元素的连续空间。
//	//业务处理
//	p->i = 100;
//	for (i = 0; i < 100; i++)
//	{
//		p->a[i] = i;
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//6.3 柔性数组的优势
//上述的 type_a 结构也可以设计为：
//代码3
//typedef struct st_type
//{
//	int i;
//	int* p_a;
//}type_a;
//int main()
//{
//	type_a* p = (type_a*)malloc(sizeof(type_a));
//	p->i = 100;
//	p->p_a = (int*)malloc(p->i * sizeof(int));
//	//业务处理
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		p->p_a[i] = i;
//	}
//	//释放空间
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}
//上述 代码2 和 代码3 可以完成同样的功能，但是 代码2 的实现有两个好处：
//第一个好处是：方便内存释放
//如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给
//用户。用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你
//不能指望用户来发现这个事。所以，如果我们把结构体的内存以及其成员要的内存一次性分配好
//了，并返回给用户一个结构体指针，用户做一次free就可以把所有的内存也给释放掉
//第二个好处是：有利于访问速度
//连续的内存有益于提高访问速度，也有益于减少内存碎片

