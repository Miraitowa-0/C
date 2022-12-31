#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//指针和数组笔试题解析

int main()
{
	//数组名的意义：
	//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
	//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
	//3. 除此之外所有的数组名都表示首元素的地址。
	 
	
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));		//4*4=16
	printf("%d\n", sizeof(a + 0));	//4 a表示首元素地址 a+0还是首元素地址 地址的大小是4/8字节
	printf("%d\n", sizeof(*a));		//4 a表示首元素地址 *a表示找到数组第一个元素 计算大小
	printf("%d\n", sizeof(a + 1));	//4 a表示首元素地址 a+1表示第二个元素的地址
	printf("%d\n", sizeof(a[1]));	//4 a[1]表示第二个元素
	printf("%d\n", sizeof(&a));		//4  &a表示取出数组的地址 
	printf("%d\n", sizeof(*&a));	//16 &a表示取出数组的地址 *&a表示找到这个数组
	printf("%d\n", sizeof(&a + 1));	//4  &a+1表示取出数组的地址,往后跳过整个数组 指向数组后面的地址
	printf("%d\n", sizeof(&a[0]));	//4 &a[0]表示取出首元素地址
	printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]+1表示取出第二个元素地址


	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));	//6 6*1=6	
	printf("%d\n", sizeof(arr + 0));//4 arr+0表示首元素地址
	printf("%d\n", sizeof(*arr));	//1	arr表示首元素地址 *arr表示首元素
	printf("%d\n", sizeof(arr[1]));	//1 arr[1]表示第二个元素
	printf("%d\n", sizeof(&arr));	//4 &arr表示数组的地址
	printf("%d\n", sizeof(&arr + 1));//4 &arr+1表示跳过一个数组的地址 指向数组后面的地址
	printf("%d\n", sizeof(&arr[0] + 1));//4 &arr[0] + 1表示第二个元素的地址


	//strlen(&)求字符串长度 参数为地址 遇到 \0 结束
	printf("%d\n", strlen(arr));	//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));	//err *arr表示首元素的值 不是地址 不符合strlen的参数 
	//printf("%d\n", strlen(arr[1]));	//err arr[1]表示第二个元素的值 也不是地址 不符合参数
	printf("%d\n", strlen(&arr));	//随机值 
	printf("%d\n", strlen(&arr + 1));//随机值 &arr + 1表示跳过一个数组的地址 从数组后面的地址开始
	printf("%d\n", strlen(&arr[0] + 1));//随机值 &arr[0] + 1表示第二个元素的地址
	return 0;
}