#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//ָ���������������

int main()
{
	//�����������壺
	//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
	//2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
	//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
	 
	
	//һά����
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));		//4*4=16
	printf("%d\n", sizeof(a + 0));	//4 a��ʾ��Ԫ�ص�ַ a+0������Ԫ�ص�ַ ��ַ�Ĵ�С��4/8�ֽ�
	printf("%d\n", sizeof(*a));		//4 a��ʾ��Ԫ�ص�ַ *a��ʾ�ҵ������һ��Ԫ�� �����С
	printf("%d\n", sizeof(a + 1));	//4 a��ʾ��Ԫ�ص�ַ a+1��ʾ�ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(a[1]));	//4 a[1]��ʾ�ڶ���Ԫ��
	printf("%d\n", sizeof(&a));		//4  &a��ʾȡ������ĵ�ַ 
	printf("%d\n", sizeof(*&a));	//16 &a��ʾȡ������ĵ�ַ *&a��ʾ�ҵ��������
	printf("%d\n", sizeof(&a + 1));	//4  &a+1��ʾȡ������ĵ�ַ,���������������� ָ���������ĵ�ַ
	printf("%d\n", sizeof(&a[0]));	//4 &a[0]��ʾȡ����Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]+1��ʾȡ���ڶ���Ԫ�ص�ַ


	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));	//6 6*1=6	
	printf("%d\n", sizeof(arr + 0));//4 arr+0��ʾ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));	//1	arr��ʾ��Ԫ�ص�ַ *arr��ʾ��Ԫ��
	printf("%d\n", sizeof(arr[1]));	//1 arr[1]��ʾ�ڶ���Ԫ��
	printf("%d\n", sizeof(&arr));	//4 &arr��ʾ����ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4 &arr+1��ʾ����һ������ĵ�ַ ָ���������ĵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4 &arr[0] + 1��ʾ�ڶ���Ԫ�صĵ�ַ


	//strlen(&)���ַ������� ����Ϊ��ַ ���� \0 ����
	printf("%d\n", strlen(arr));	//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));	//err *arr��ʾ��Ԫ�ص�ֵ ���ǵ�ַ ������strlen�Ĳ��� 
	//printf("%d\n", strlen(arr[1]));	//err arr[1]��ʾ�ڶ���Ԫ�ص�ֵ Ҳ���ǵ�ַ �����ϲ���
	printf("%d\n", strlen(&arr));	//���ֵ 
	printf("%d\n", strlen(&arr + 1));//���ֵ &arr + 1��ʾ����һ������ĵ�ַ ���������ĵ�ַ��ʼ
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ &arr[0] + 1��ʾ�ڶ���Ԫ�صĵ�ַ
	return 0;
}