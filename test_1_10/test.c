#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>
//字符函数和字符串函数1.1
//1.7 strncmp
//int strncmp(const char* str1, const char* str2, size_t num);
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完
//int main()
//{
//	char* str1 = "abcdef";
//	char* str2 = "abcf";
//	int ret = strncmp(str1, str2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr example 
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch = NULL;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	printf("%s\n", str);//This is a sample string
//	return 0;
//}


//1.8 strstr 查找子串 找到返回首次出现的字串的地址 找不到返回空指针
//char* strstr(const char* str1, const char* str2);
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2=='\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0')
//		{
//			return cur;//找到字串
//		}
//		cur++;
//	}
//	return NULL;//找不到字串
//}
//int main()
//{
//	char* str1 = "abbbcdef";
//	char* str2 = "bbc";
//	char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}


//1.9 strtok
//char* strtok(char* str, const char* sep);
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
//（注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回 NULL 指针。

//strtok example 
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s ", pch);//This a sample string
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
//int main()
//{
//	char* str = "lilongxiang1029@gmail.com";
//	const char* sep = "@.";
//	char arr[30];
//	char* p = NULL;
//	strcpy(arr, str); //将数据拷贝一份，处理arr数组的内容
//	for (p = strtok(arr, sep); p != NULL; p = strtok(NULL, sep))
//	{
//		printf("%s ", p);
//	}
//	return 0;
//}


//1.10 strerror
//char* strerror(int errnum);
//返回错误码，所对应的错误信息。
//错误码			错误信息
//	0				No error
//	1				Operation not permitted
//	2				No such file or directory
//......
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//errno是一个全局的错误码的变量
//		//当C语言的库函数在执行过程中发生了错误，就会把对应的错误码赋值到errno中
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}


//字符转换：
//int tolower(int c); 转小写
//int toupper(int c); 转大写	
/* isupper example */
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//		{
//			c = tolower(c);
//		}	
//		printf("%c",c);
//		i++;
//	}
//	return 0;
//}