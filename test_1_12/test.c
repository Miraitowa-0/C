#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//自定义类型：结构体,枚举,联合

//1.2 结构的声明
//struct Student
//{
//	char name[20];//名字
//	int age;	  //年龄
//	char sex[5];  //性别
//	char id[20];  //学号
//}; 



//1.4 结构的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};



//1.5 结构体变量的定义和初始化
//struct Point
//{
//	int x;
//	int y;
//}p1;			 //声明类型的同时定义变量p1
//
//struct Stu		 //声明类型	
//{
//	char name[15];//名字
//	int age;	  //年龄
//};
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL };					//结构体嵌套初始化
//
//int main()
//{
//	struct Point p2;						//定义结构体变量p2
//	struct Point p3 = { 1, 2 };				//初始化：定义变量的同时赋初值
//	struct Stu s = { "zhangsan", 20 };		//初始化
//	struct Node n2 = { 20, {5, 6}, NULL };	//结构体嵌套初始化
//	return 0;
//}

//1.6 结构体内存对齐 计算结构体的大小
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//}
//如何计算？
//首先得掌握结构体的对齐规则：
//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//   对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。VS中默认的值为8
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处
//   结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。



//为什么存在内存对齐 ?
//1. 平台原因(移植原因)：
//不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，
//否则抛出硬件异常。
//2. 性能原因：
//数据结构(尤其是栈)应该尽可能地在自然边界上对齐。原因在于为了访问未对齐的内存，
//处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
//总体来说：结构体的内存对齐是拿空间来换取时间的做法。




//在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
//让占用空间小的成员尽量集中在一起。
//例如：
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//S1和S2类型的成员一模一样，但是S1和S2所占空间的大小有了一些区别。
 
 
//例如：
//修改默认对齐数
#pragma pack(8)//设置默认对齐数为8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认


#pragma pack(1)//设置默认对齐数为1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
int main()
{
	//输出的结果是什么？
	printf("%d\n", sizeof(struct S1));//12
	printf("%d\n", sizeof(struct S2));//6
}
//结论：结构在对齐方式不合适的时候，可以自己更改默认对齐数。