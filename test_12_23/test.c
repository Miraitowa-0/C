#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//结构体和使用调试技巧
//typedef struct stu
//{
//	char name[10];
//	int age;
//	char tele[12];
//	char sex[5];
//}stu;
////结构体传参
//void print1(stu s)
//{
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//}
//
////结构体地址传参
//void print2(stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//}
//int main()
//{
//	stu s = { "胡求学",20,"13783686338","男" };
//	print1(s);	//传结构体
//	print2(&s);	//传地址
//	return 0;
//	//首选print2函数
//	//函数传参的时候，参数是需要压栈的。
//	//如果传递一个结构体对象的时候，结构体过大，
//	//参数压栈的的系统开销比较大，所以会导致性能的下降。
//}


//求 1！ + 2！ + 3！ ... + n!；不考虑溢出
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//研究程序死循环的原因
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//模拟实现库函数：strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//求字符串长度
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//保证指针的有效性
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
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}