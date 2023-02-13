#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//1--ʱ�临�ӶȺͿռ临�Ӷȼ���


//�����һ��Func1��������ִ���˶��ٴΣ�
//Func1 ִ�еĻ�����������:F(N)=N^2 + 2*N + 10
//Func1��ʱ�临�Ӷ�Ϊ��O(N^2)
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


//����Func2��ʱ�临�Ӷȣ�
//Func2 ִ�еĻ�����������:F(N)=2*N + 10
//Func2��ʱ�临�Ӷ�Ϊ��O(N)
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


//����Func3��ʱ�临�Ӷȣ�
//Func3 ִ�еĻ�����������:F(N)=M+N
//������δ֪��M��N,Func3��ʱ�临�Ӷ�Ϊ O(N+M)
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


//����Func4��ʱ�临�Ӷȣ�
//Func4 ִ�еĻ�����������:F(N)=100
//Func1��ʱ�临�Ӷ�Ϊ��O(1)
//void Func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}


//����strchr��ʱ�临�Ӷȣ�
//��������ִ�����1�Σ��N�Σ�ʱ�临�Ӷ�һ�㿴���ʱ�临�Ӷ�Ϊ O(N)
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


// ����BubbleSort��ʱ�临�Ӷȣ�
//��������ִ�����N�Σ��ִ����(N*(N+1)/2�Σ�ͨ���Ƶ���O�׷���+ʱ�临�Ӷ� һ�㿴���ʱ�临�Ӷ�Ϊ O(N ^ 2)
//ʹ���˳���������ռ䣬���Կռ临�Ӷ�Ϊ O(1)
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


//����BinarySearch��ʱ�临�Ӷȣ�
//��������ִ�����1�Σ��O(logN)�Σ�ʱ�临�Ӷ�Ϊ O(logN)
//logN���㷨�����б�ʾ�ǵ���Ϊ2������ΪN��
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


//����׳˵ݹ�Factorial��ʱ�临�Ӷȣ�
//���������ݹ���N�Σ�ʱ�临�Ӷ�ΪO(N)
//�ݹ������N�Σ�������N��ջ֡��ÿ��ջ֡ʹ���˳������ռ䡣�ռ临�Ӷ�ΪO(N)
//long long Factorial(size_t N)
//{
//	return N < 2 ? N : Factorial(N - 1) * N;
//}
//
//int main()
//{
//	return 0;
//}