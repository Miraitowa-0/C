#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
//程序环境和预处理1.1
//3.2.6 宏和函数对比
//int Max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//#define MAX(A,B) ((A)>(B)?(A):(B))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max1 = 0;
//	int max2 = 0;
//	max1 = MAX(a, b);
//	printf("%d\n", max1);
//	max2 = Max(a, b);
//	printf("%d\n", max2);
//	return 0;
//}

//1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比
//函数在程序的规模和速度方面更胜一筹。
//2. 更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。
//反之这个宏怎可以适用于整形、长整型、浮点型等可以用于 > 来比较的类型。宏是类型无关的。
//当然和宏相比函数也有劣势的地方：
//1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
//2. 宏是没法调试的。
//3. 宏由于类型无关，也就不够严谨。
//4. 宏可能会带来运算符优先级的问题，导致程容易出现错。
//宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到。

//命名约定
//一般来讲函数的宏的使用语法很相似。所以语言本身没法帮我们区分二者。
//那我们平时的一个习惯是：把宏名全部大写，函数名不要全部大写



//3.3 #undef
//#define MAX 100
//int main()
//{
//	printf("MAX= %d\n", MAX);
//#undef MAX
//	printf("MAX= %d\n", MAX);
//	return 0;
//}


//3.4 命令行定义
//int main()
//{
//	int array[ARRAY_SIZE];
//	int i = 0;
//	for (i = 0; i < ARRAY_SIZE; i++)
//	{
//		array[i] = i;
//	}
//	for (i = 0; i < ARRAY_SIZE; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}
//编译指令：gcc -D ARRAY_SIZE=10 programe.c


//3.5 条件编译
//在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的。因为我们有条件编译指令。
//比如说：调试性的代码，删除可惜，保留又碍事，所以我们可以选择性的编译。
//#define __DEBUG__
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d ", arr[i]);//为了观察数组是否赋值成功。 
//#endif 
//	}
//	return 0;
//}


//3.6 文件包含
//我们已经知道， #include 指令可以使另外一个文件被编译。就像它实际出现于 #include 指令的地方一样。
//这种替换的方式很简单：
//预处理器先删除这条指令，并用包含文件的内容替换。
//这样一个源文件被包含10次，那就实际被编译10次。

//本地文件包含: #include "filename"
//库文件包含:   #include <filename.h>

//如何解决头文件的重复引入问题？ 答案：条件编译。
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//请编写宏，计算结构体中某变量相对于首地址的偏移
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//#define MY_OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//int main()
//{
//	//struct S s;
//	printf("%d\n", MY_OFFSETOF(struct S, c1));
//	printf("%d\n", MY_OFFSETOF(struct S, a));
//	printf("%d\n", MY_OFFSETOF(struct S, c2));
//	return 0;
//}