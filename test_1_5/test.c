#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ����ϰ


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


//����ˮ����
//����ˮ��1ƿ��ˮ1��Ǯ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ��
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;
//	empty = money;
//	//��ƿ������ˮ
//	while (empty>=2)
//	{
//		total += empty / 2;
//		//�µĿ�ƿ=����Ŀ�ƿ+���µĿ�ƿ  
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}


//��������ż��˳��
//����һ���������飬ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е�����λ������ǰ�벿�֣�����ż��λ������ĺ�벿��
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�������ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//���ұ�������
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