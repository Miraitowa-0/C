#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%p\n", a[0]);
//	printf("%p\n", a[0]+1);
//	printf("%p\n", a+1);
//
//	printf("%d\n", sizeof(a));//48 3*4*4=48 sizeof(a)计算整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));//4  a[0][0]表示第一行第一个元素 
//	printf("%d\n", sizeof(a[0]));//16 a[0]是数组名 sizeof(arr[0])表示第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4 
//	//a[0]表示数组第一行中首元素地址	a[0]+1表示第一行第二个元素的地址
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	//a是数组名 表示第一行的地址 (a+1)表示第二行的地址 
//
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]表示第一行的地址 &a[0]+1表示第二行地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16	a表示首元素地址(第一行的地址)
//	printf("%d\n", sizeof(a[3]));//16
//
//	//总结：
//	//	数组名的意义：
//	//	1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//	//	2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//	//	3. 除此之外所有的数组名都表示首元素的地址。
//	return 0;
//}


//指针笔试题
//笔试题1：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////程序的结果是什么？
////2 5


//笔试题2：
//假设p 的值为0x100000。 如下表表达式的值分别为多少？考点：指针+-整数 取决于指针类型
//已知，结构体Test类型的变量大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//p是结构体指针 p+1跳过一个结构体 0x10000+20(0x100014)=0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//p强制转换为整形 0x100000+1=0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//p强制转换为int* 0x100000+4=0x00100004
//	return 0;
//}


//笔试题3：
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x\n", ptr1[-1], *ptr2);//4 2000000
//	return 0;
//}


//笔试题4：
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式 括号内最后一个数做为结果
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);//1
//	return 0;
//}


////笔试题5:
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC -4
//	//以%p形式打印 打印的是地址 负数在内存以补码方式存储地址
//	//指针-指针=中间的元素个数
//	//&p[4][2]=*(*(p+4)+2)
//	return 0;
//}