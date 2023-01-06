#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//第7题(编程题)
//题目名称:
//猜凶手
//题目内容
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
//以下为4个嫌疑犯的供词
//A说: 不是我
//B说: 是C
//c说: 是D
//D说: C在胡说
//已知3个人说了真话，1个人说的是假话
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main()
//{
//	//真话为1 假话为0 4个人说的话相加等于3 则能找到凶手
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}

//数据的存储
//注意整形提升
//int main()
//{
//	//unsigned char 范围：0-255
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d\n", a + b, c);
//	//300 44
//	return 0;
//}


//在32位大端模式处理器上 变量b=0
//int main()
//{
//	unsigned int a = 0x1234;
//	//取出a的地址 强制转化为无符号字符指针 每次访问1字节
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	//大端模式 b=0
//	//小端模式 b=52
//	return 0;
//}



//int main()
//{
//	//char 的范围：-128-127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	// -1 -2 ...... -128 127 126 ......3 2 1 0
//	//strlen()求字符串长度 遇见 \0 0结束
//	//长度为:128+127=255
//	printf("%d\n", strlen(a));
//	return 0;
//}


//打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	//打印二维数组
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}