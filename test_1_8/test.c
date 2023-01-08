#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//旋转字符串
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB


//方法1
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符串
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//	printf("%s\n", arr);
//	return 0;
//}

//方法2 三步翻转法
//逆置字符串
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//						 //以k为界限	
//	reverse(arr,arr+k-1);//左边逆置
//	reverse(arr+k,arr+len-1);//右边逆置
//	reverse(arr,arr+len-1);//整体逆置
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,3);
//	printf("%s\n", arr);
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//例如：给定s1=AABCD s2=BCDAA 返回1
//		给定s1=abcde s2=ABCDE 返回0
//AABCD左旋一个字符串得到ABCDA
//AABCD左旋两个字符串得到BCDAA
//AABCD左旋三个字符串得到CDAAB

//方法1
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符串
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}


//方法2
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//strncat()字符串追加函数 在s1字符串中追加一个s1字符串
//	strncat(s1, s1, len1);//abcdefabcdef
//	//strstr()判断s2指向的字符串是否为s1指向的字符串的字串
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//题目名称：杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求: 时间复杂度小于0(N);
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6,},{7,8,9} };
//	int k = 7;
//	//把3行3列作为地址传参
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标为：%d %d", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//}