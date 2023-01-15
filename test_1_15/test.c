#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//动态内存管理
//2.1 malloc和free
//动态内存开辟的函数：
//void* malloc (size_t size);
//这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。
//如果开辟成功，则返回一个指向开辟好空间的指针。
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//返回值的类型是 void*，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
//如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器
 
 
 
//C语言提供了另外一个函数free，专门是用来做动态内存的释放和回收的
//void free (void* ptr);
//free函数用来释放动态开辟的内存。
//如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
//如果参数 ptr 是NULL指针，则函数什么事都不做。
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//申请失败 打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//申请成功 正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用时，应该还给操作系统
//	free(p);
//	p = NULL;
//	//指针p仍能找到被释放的空间的地址 不安全 应置为空指针
//	return 0;
//}


//int main()
//{
//	//代码1 变长内存分配 VS不支持 C99支持
//	int num = 0;
//	scanf("%d", &num);
//	int arr[num] = { 0 };
//	 
//	 
//	//代码2
//	int num = 10;
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)//判断ptr指针是否为空
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//释放ptr所指向的动态内存
//	ptr = NULL;//是否有必要？
//	return 0;
//}


//2.2 calloc
//C语言还提供了一个函数叫 calloc ， calloc 函数也用来动态内存分配。原型如下：
//void* calloc(size_t num, size_t size);
//函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0
//与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.3 realloc
//realloc函数的出现让动态内存管理更加灵活。
//有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，那为了申请合理的的内存，
//我们一定会对内存的大小做灵活的调整。那 realloc 函数就可以做到对动态开辟内存大小的调整。
//函数原型如下：
//void* realloc(void* ptr, size_t size);
//ptr 是要调整的内存地址
//size 调整之后新大小
//返回值为调整之后的内存起始位置。
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到 新 的空间。
//realloc在调整内存空间的是存在两种情况：
//情况1 p指向的空间后 有   足够的内存空间可以追加，则直接追加，然后返回p
//情况2 p指向的空间后 没有 足够的内存空间可以追加，则重新开辟一个满足需求的空间，
//并把原来内存中的数据拷贝过来，释放原来的内存空间，返回新开辟的内存空间的地址
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p != NULL)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		
//	}
//	//用一个新指针来接收realloc()的返回值 
//	//若开辟内存空间成功，则返回指针 
//	//若开内存空间不成功，则返回NULL，用新的指针接收NULL，不会把原来的数据改掉
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 10; i < 20; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	//扩展容量
//	//代码1
//	ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？) 若开内存空间不成功，则返回NULL，用新的指针接收NULL，不会把原来的数据改掉
//
//	//代码2
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	return 0;
//}


//3. 常见的动态内存错误
//3.1 对NULL指针的解引用操作
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果开辟内存空间失败，p的值是NULL，就会有问题
//	free(p);
//}

//3.2 对动态开辟空间的越界访问
//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}

//3.3 对非动态开辟内存使用free释放
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok? 
//	//p是在栈内存中开辟的空间 free()释放的是在堆内存中开辟的动态内存空间
//}


//3.4 使用free释放一块动态开辟内存的一部分
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;//p不再指向动态内存的起始位置
//	free(p);//只释放了一部分
//}


//3.5 对同一块动态内存多次释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//3.6 动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//	return 0;
//}
//切记：动态开辟的空间一定要释放，并且正确释放