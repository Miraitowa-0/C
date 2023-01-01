#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//字符数组
//数组名表示首元素地址
//以下两种情况除外: 1.sizeof(数组名) 数组名表示整个数组  2.&数组名 数组名表示整个数组
int main()
{
	//char arr[] = "abcdef";		//在数组实际存储为: abcdef\0
	//printf("%d\n", sizeof(arr));	//7	7*1=7 arr表示整个数组
	//printf("%d\n", sizeof(arr + 0));//4/8	
	//printf("%d\n", sizeof(*arr));	//1
	//printf("%d\n", sizeof(arr[1]));	//1
	//printf("%d\n", sizeof(&arr));	//4/8	arr表示整个数组 &arr表示整个数组的地址
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//strlen()参数为地址 const char* 
	//printf("%d\n", strlen(arr));	//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));	//err arr表示首元素地址 *arr表示字符a a对应的ASCII值为97 								
	////printf("%d\n", strlen(arr[1]));	//把97作为地址传递给strlen 从地址97开始访问 属于非法访问
	//printf("%d\n", strlen(&arr));	//6 &arr取出整个数组的地址 整个数组的地址从首元素地址开始
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5



	//char* p = "abcdef";		//abcdef\0 字符型指针p指向字符常量 p里面存的是a的地址
	//printf("%d\n", sizeof(p));	//4/8
	//printf("%d\n", sizeof(p + 1));//4/8
	//printf("%d\n", sizeof(*p));	//1
	//printf("%d\n", sizeof(p[0]));//1  p[0] == *(p+0）== 'a'
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//非法访问	err
	////printf("%d\n", strlen(p[0]));//非法访问 err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}