#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//5. 函数指针
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	print("hello world");
//	void(*pf)(char*) = print;
//	(*pf)("hello world");
//	return 0;
//}
//int main()
//{
//	//代码1
//	(*(void (*)())0)();
//	//把0强制转化为：void(*)() 函数指针类型，0就是一个函数的地址
//	// 对0(函数地址)解引用,调用该函数
//	
//
//
//	//代码2
//	void (*signal(int, void(*)(int)))(int);
//	//signal是一个函数声明
//	//signal函数有两个参数,一个参数为int,另一个参数为函数指针,该函数指针指向的函数的参数是int,返回类型是void
//	//signal函数的返回类型是函数指针,该函数指针指向的函数的参数为int,返回类型是void
//
//	//代码2简化
//	typedef unsigned int uint;
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	return 0;
//}
 



//int Add(int x, int y)
//{
//	int z = 0;
//	return z = x + y;
//}
//int main()
//{
//	int (*p)(int, int) = Add;
//	printf("%d\n", (*p)(2, 5));
//	printf("%d\n", Add(2, 5));
//	printf("%d\n", p(2, 5));
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf,能够指向my_strcpy
//char* (*pf)(char*, const char*);
//2.写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);


//计算器
//void menu()
//{
//	printf("********************\n");
//	printf("**  1.add  2.sub  **\n");
//	printf("**  3.mul  4.div  **\n");
//	printf("**  5.xor  0.exit **\n");
//	printf("********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////异或运算
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}

//用函数指针的数组实现
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr是一个函数指针的数组 - 转移表
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);//调用函数
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误,请重新输入\n");
//		}
//		
//
//	} while (input);
//	return 0;
//}


//用回调函数实现
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误,请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//7. 指向函数指针数组的指针
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pfun
//	void (*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//
//
//	//指向函数指针数组pfunArr的指针ppfunArr
//	//指针ppfunArr指向函数指针数组 该函数指针数组有5个元素，每个元素都是一个函数指针
//	void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//	return 0;
//}
