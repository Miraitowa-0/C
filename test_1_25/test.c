#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//程序环境和预处理
//1. 程序的翻译环境和执行环境
//在ANSI C的任何一种实现中，存在两个不同的环境。
//第1种是翻译环境，在这个环境中源代码被转换为可执行的机器指令。
//第2种是执行环境，它用于实际执行代码


//2.详解编译 + 链接
//2.2 编译本身也分为几个阶段：
//1. 预处理 选项 gcc - E test.c -  test.i
//预处理完成之后就停下来，预处理之后产生的结果都放在test.i文件中。
//2. 编译 选项 gcc - S test.c
//编译完成之后就停下来，结果保存在test.s中。
//3. 汇编 gcc - c test.c
//汇编完成之后就停下来，结果保存在test.o中。
//extern sum(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = sum(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//2.3 运行环境
//程序执行的过程：
//1. 程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。
//在独立的环境中，程序的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
//2. 程序的执行便开始。接着便调用main函数。
//3. 开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回
//地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程
//一直保留他们的值。
//4. 终止程序。正常终止main函数；也有可能是意外终止。


//3. 预处理详解
//3.1 预定义符号
//__FILE__      //进行编译的源文件
//__LINE__     //文件当前的行号
//__DATE__    //文件被编译的日期
//__TIME__    //文件被编译的时间
//__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义
//int main()
//{
//	//写日志文件
//	FILE* pf = fopen("log.txt", "w");
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d date:%s time:%d i=%d\n",
//		__FILE__, __LINE__, __DATE__, __TIME__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//3.2 #define
//3.2.1 #define 定义标识符
//#define name stuff
//#define MAX 1000
//#define reg register       //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;)  //用更形象的符号来替换一种实现
//#define CASE break;case     //在写case语句的时候自动把 break写上。



//在define定义标识符的时候，要不要在最后加上 ; ?
//建议不要加上 ; ,这样容易导致问题
//比如下面的场景：会出现语法错误。if语句内语句有两句，超过一句必须用大括号 
//#define MAX 1000;
//#define MAX 1000
//int main()
//{
//	int condition = 1;
//	int max = 0;
//	if (condition)
//		max = MAX;
//	//  max=100;
//	//		;
//	else
//		max = 0;
//	return 0;
//}


//3.2.2 #define 定义宏
//#define 机制包括了一个规定，允许把参数替换到文本中，
//这种实现通常称为宏（macro）或定义宏（define macro）。
//#define name( parament-list ) stuff
//其中的 parament-list 是一个由逗号隔开的符号表，它们可能出现在stuff中



//#define SQUARE(x) (x) * (x)
//#define DOUBLE(x) ((x) + (x))
//所以用于对数值表达式进行求值的宏定义都应该用这种方式加上括号，
//避免在使用宏时由于参数中的操作符或邻近操作符之间不可预料的相互作用。
//int main()
//{
//	int a = 5;
//	printf("%d\n", SQUARE(a + 1));
//	printf("%d\n", 10 * DOUBLE(a));
//	return 0;
//}


//3.2.4 #和##
//如何把参数插入到字符串中？
//使用 # ，把一个宏参数变成对应的字符串
//#define PRINT(FORMAT, VALUE)\
// printf("the value of "#VALUE" is "FORMAT "\n", VALUE);
//int main()
//{
//	int i = 10;
//	PRINT("%d", i + 3);
//	return 0;
//}
//## 的作用
//##可以把位于它两边的符号合成一个符号。
//它允许宏定义从分离的文本片段创建标识符。
