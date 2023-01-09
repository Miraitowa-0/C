#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//字符函数和字符串函数
//1.1 strlen
//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数
//（不包含 '\0' )。
//size_t strlen(const char* str);
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是无符号的（ 易错 ）
//学会strlen函数的模拟实现 3种方法：计数器，递归，指针-指针
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcedf");
//	printf("len=%d\n", len);
//	return 0;
//}



//1.2 strcpy
//char* strcpy(char* destination, const char * source);
//Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).
//源字符串必须以'\0'结束。
//会将源字符串中的'\0'拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变。
//学会模拟实现
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的字符串 包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//1.3 strcat
//char* strcat(char* destination, const char* source);
//源字符串必须以'\0'结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//字符串自己给自己追加，如何？
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//1.4 strcmp
//intstrcmp(constchar* str1, constchar* str2);
//标准规定：
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//1.5 strncpy
//char* strncpy(char* destination, constchar * source, size_tnum);
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (*dest && count)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	while (count--)
//		*dest++ = '\0';
//	return tmp;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//1.6 strncat
//char* strncat(char* destination, constchar * source, size_tnum);
//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (*dest)
//		dest++;
//	while (count && *src)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 10);
//	printf("%s\n", arr1);
//}