#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//创建一个整形数组，完成对数组的操作
//1.实现函数init(),初始化元素全为0
//2.实现print(),打印数组的每个元素
//3.实现reverse()完成函数的逆置
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//交换数组
//将数组arr1中的内容和arr2中的内容交换（数组一样大）
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//强制转化为short*型指针 每次访问2个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//0 0 3 4 5
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;//在内存中倒着存放：44332211 正着输出：11223344
//	char* pc = (char*)&a;//强制转化为char*型指针 每次访问1个字节
//	*pc = 0;//解引用操作 把内存中第一个字节的值改为00  00332211
//	printf("%x\n", a);//正着输出：11223300
//	return 0;
//}


//int i;//全局变量-不初始化-默认是0
//int main()
//{
//	i--;
//	//i=-1
//	//10000000000000000000000000000001 源码
//	//11111111111111111111111111111110 反码
//	//11111111111111111111111111111111 补码
//	if (i > sizeof(i))//sizeof()计算变量类型的大小 大等于0 是无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//写一个函数，统计二进制中1的个数
//方法1
//int count_bit_one(unsigned int n)//把负数的符号位看成有效位 当成无符号数来计算
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}


//方法2
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//让n的每一个都按位与1,结果为1，则计数器+1 规则：全为1则为1 有一个0则为0
//		//例：n=-1
//		//11111111111111111111111111111111
//		//00000000000000000000000000000001
//		//00000000000000000000000000000001	得到一个1，然后n进行右移，继续按位与1，循环31次
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//方法3
//int count_bit_one(int n)
//{
//	//例：
//	// n=13				1101
//	//n-1=12			1100
//	//n=n&(n-1)=12		1100		
//	//n-1=11			1011
//	//n=n&(n-1)=8		1000
//	//n-1=7				0111
//	//n=n&(n-1)=0		0000	
//	//结论： 每次 n&(n-1) 得到的 新的n 都会使 原来的n 最右边的1 消失
//	//循环往复 计数器记录消失的1的次数 直到 n=0
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d", count);
//}


//求二进制中不同位的个数
//两个int整数m和n的二进制表达中，有多少（bit）位不同？
//例： 输入 1999 2299 输出：7
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;	//m^n 按位或 不同为1 相同为0
//	//count_bit_one(tmp);	//调用求二进制有几个1的函数
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count =%d ", count);
//	return 0;
//}


//获取一个整数二进制序列中所有的奇数位和偶数位，分别打印出二进制序列
//void print(int n)
//{
//	printf("奇数位：");
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//交换两个变量，不创建临时变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前： a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后： a=%d b=%d\n", a, b);
//	return 0;
//}


//写一个函数打印数组arr的内容，不能使用数组下标，使用指针
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//打印乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d",j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//逆置字符数
//例：abcdef	输出：fedcba
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//递归函数
//例：
//输入：1729
//输出：19		1+7+2+9=19
//int DigitSum(int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}



//编写函数 实现n的k次方
//double Pow(int n, int k)
//{
//	//n^k= n * n^(k-1)
//	if (k < 0)
//	{
//		return (1.0 / (Pow(n, -k)));
//	}
//	else if(k ==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n* Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}