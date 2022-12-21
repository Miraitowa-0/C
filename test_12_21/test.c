#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//printf("%p\n", pa);
//	*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	 
//	
//	// 指针的类型决定了 对指针解引用的时候有多大的权限（能操作几个字节）。
//	//char* 的指针解引用就只能访问一个字节
//	//int* 的指针的解引用就能访问四个字节。
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//char* p = arr;
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	//指针的类型决定了指针向前或者向后走一步有多大（距离）。
//}

//野指针
//概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//成因：1. 指针未初始化	2. 指针越界访问	3. 指针指向的空间释放

//int main()
//{
//	int a;//局部变量未初始化，默认为随机值
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;//创建局部变量，出了test()就自动销毁
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//通过地址访问a的内容是错误的
//	return 0;
//}

//如何规避野指针
//1. 指针初始化
//2. 小心指针越界
//3. 指针指向空间释放即使置NULL
//4. 避免返回局部变量的地址
//5. 指针使用之前检查有效性


//指针 + -整数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//int* p = &arr[9];
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;//后置++ 先使用 在++
//		//p--;
//	}
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//指针 - 指针
//求字符串长度 1.计数器 2.递归函数 3.指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//末指针-初指针=元素个数
//
//}
//int main()
//{
//	char str[] = "bit";
//	int len = my_strlen(str);
//	printf("len=%d\n", len);
//	return 0;
//}

//指针的关系运算
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
// 但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。



//指针和数组
//数组名表示的是数组首元素的地址
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//指针存放数组首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		//printf("%d ", arr[i]);
//	}
//}


//指针数组
//指针数组是指针还是数组？
//答案：是数组。是存放指针的数组
//整形数组:存放整形的数组
//字符数组:存放字符的数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%p ", (arr[i]));
//		printf("%d ", *(arr[i]));
//	}
//}