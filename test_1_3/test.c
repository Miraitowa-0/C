#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//������6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (*(aa + 1));//(*(aa + 1))== aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}



//������7
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//a
//	return 0;
//}


//������8
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}


//ָ����ϰ
//int main()
//{
//	unsigned long pulArry[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArry;
//	*(pulArry + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}


//дһ�����������������ַ���������
//void reverse(char* str)
//{
//	assert(str);
//	int len =strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s",arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//�������
//Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�� ����a��һ������
//����24690=2+22+222+22222+22222
//int main()
//{
//	int n = 0;
//	int a=0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//��0-100000֮���ˮ�ɻ����������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���(������)
//		//1.����i��λ�� nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp%10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ� i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//������
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j + 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}