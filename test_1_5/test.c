#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体练习


//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);
//	printf("%d\n", (*p).a);
//	printf("%d\n", p->a);
//	return 0;
//}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", p->name);//wang
//	return 0;
//}
//int main()
//{
//	struct stu students[3] = { {1001,"zhang",20},{1002,"wang",20}, {1003,"li",20} };
//	fun(students + 1);
//	return 0;
//}


//喝汽水问题
//喝汽水，1瓶汽水1块钱，2个空瓶可以换1瓶汽水，给20元，可以喝多少瓶汽水？
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水
//	total = money;
//	empty = money;
//	//空瓶换的汽水
//	while (empty>=2)
//	{
//		total += empty / 2;
//		//新的空瓶=喝完的空瓶+余下的空瓶  
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}


//调整奇数偶数顺序
//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序，使得数组中所有的奇数位于数组前半部分，所有偶数位于数组的后半部分
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = 0;
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}

}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}