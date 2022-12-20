#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//操作符
// 
//传参过来的arr和ch是指针 在64位系统上为8字节
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//8
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}



//一道变态的面试题：
//不能创建临时变量（第三个变量），实现两个数的交换
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("before:a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:a = %d b = %d\n", a, b);
//	return 0;
//}



//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}


//360笔试题
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//逻辑与 第一个为假 后面不用算 全部为假
//	i = a++||++b||d++;//逻辑或 第一个为真 后面不用算 全部为真
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//程序输出的结果是什么？



//函数调用操作符
//int get_max(int x, int y)
//{
//	return x > y ?  x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//使用（）作为函数调用操作符
//	int max = get_max(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}



// 访问一个结构的成员
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//int main()
//{
//	struct Stu s1 = { "胡求学",22,"男",95 };
//	printf("%s\n", s1.name);
//	struct Stu* ps = &s1;
//	printf("%d\n", (*ps).age);
//	printf("%s\n", ps->sex);
//	return 0;
//}


//整形提升是按照变量的数据类型的符号位来提升的
//负数的整形提升
//char c1 = -1;
//变量c1的二进制位(补码)中只有8个比特位：
//1111111
//因为 char 为有符号的 char
//所以整形提升的时候，高位补充符号位，即为1
//提升之后的结果是：
//11111111111111111111111111111111
//正数的整形提升
//char c2 = 1;
//变量c2的二进制位(补码)中只有8个比特位：
//00000001
//因为 char 为有符号的 char
//所以整形提升的时候，高位补充符号位，即为0
//提升之后的结果是：
//00000000000000000000000000000001


//实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//16进制 10110110 整形提升后：11111111111111111111111110110110
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//实例1中的a, b要进行整形提升, 但是c不需要整形提升
// a, b整形提升之后, 变成了负数, 所以表达式 a == 0xb6, b == 0xb600 的结果是假, 
// 但是c不发生整形提升, 则表
// 达式 c == 0xb6000000 的结果是真.
// 所程序输出的结果是:
// c
//}


//实例2
//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(+c));//4
//	printf("%d\n", sizeof(-c));//4
//	return 0;
//}
//实例2中的, c只要参与表达式运算, 就会发生整形提升, 表达式 + c, 就会发生提升,
//  所以 sizeof(+c) 是4个字节.
//表达式 - c 也会发生整形提升, 所以 sizeof(-c) 是4个字节, 
//但是 sizeof(c), 就是1个字节.



