#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//1--时间复杂度和空间复杂度计算


//请计算一下Func1基本操作执行了多少次？
//Func1 执行的基本操作次数:F(N)=N^2 + 2*N + 10
//Func1的时间复杂度为：O(N^2)
//void Func1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}


//计算Func2的时间复杂度？
//Func2 执行的基本操作次数:F(N)=2*N + 10
//Func2的时间复杂度为：O(N)
//void Func2(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}


//计算Func3的时间复杂度？
//Func3 执行的基本操作次数:F(N)=M+N
//有两个未知数M和N,Func3的时间复杂度为 O(N+M)
//void Func3(int N, int M)
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}


//计算Func4的时间复杂度？
//Func4 执行的基本操作次数:F(N)=100
//Func1的时间复杂度为：O(1)
//void Func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}


//计算strchr的时间复杂度？
//基本操作执行最好1次，最坏N次，时间复杂度一般看最坏，时间复杂度为 O(N)
//const char* strchr(const char* str, char character)
//{
//	while (*str != '\0')
//	{
//		if (*str == character)
//			return str;
//
//		++str;
//	}
//
//	return NULL;
//}


// 计算BubbleSort的时间复杂度？
//基本操作执行最好N次，最坏执行了(N*(N+1)/2次，通过推导大O阶方法+时间复杂度 一般看最坏，时间复杂度为 O(N ^ 2)
//使用了常数个额外空间，所以空间复杂度为 O(1)
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}


//计算BinarySearch的时间复杂度？
//基本操作执行最好1次，最坏O(logN)次，时间复杂度为 O(logN)
//logN在算法分析中表示是底数为2，对数为N。
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n;
//	while (begin < end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid;
//		else
//			return mid;
//	}
//	return -1;
//}


//计算阶乘递归Factorial的时间复杂度？
//基本操作递归了N次，时间复杂度为O(N)
//递归调用了N次，开辟了N个栈帧，每个栈帧使用了常数个空间。空间复杂度为O(N)
//long long Factorial(size_t N)
//{
//	return N < 2 ? N : Factorial(N - 1) * N;
//}
//
//int main()
//{
//	return 0;
//}