#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ַ�����
//��������ʾ��Ԫ�ص�ַ
//���������������: 1.sizeof(������) ��������ʾ��������  2.&������ ��������ʾ��������
int main()
{
	//char arr[] = "abcdef";		//������ʵ�ʴ洢Ϊ: abcdef\0
	//printf("%d\n", sizeof(arr));	//7	7*1=7 arr��ʾ��������
	//printf("%d\n", sizeof(arr + 0));//4/8	
	//printf("%d\n", sizeof(*arr));	//1
	//printf("%d\n", sizeof(arr[1]));	//1
	//printf("%d\n", sizeof(&arr));	//4/8	arr��ʾ�������� &arr��ʾ��������ĵ�ַ
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//strlen()����Ϊ��ַ const char* 
	//printf("%d\n", strlen(arr));	//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));	//err arr��ʾ��Ԫ�ص�ַ *arr��ʾ�ַ�a a��Ӧ��ASCIIֵΪ97 								
	////printf("%d\n", strlen(arr[1]));	//��97��Ϊ��ַ���ݸ�strlen �ӵ�ַ97��ʼ���� ���ڷǷ�����
	//printf("%d\n", strlen(&arr));	//6 &arrȡ����������ĵ�ַ ��������ĵ�ַ����Ԫ�ص�ַ��ʼ
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5



	//char* p = "abcdef";		//abcdef\0 �ַ���ָ��pָ���ַ����� p��������a�ĵ�ַ
	//printf("%d\n", sizeof(p));	//4/8
	//printf("%d\n", sizeof(p + 1));//4/8
	//printf("%d\n", sizeof(*p));	//1
	//printf("%d\n", sizeof(p[0]));//1  p[0] == *(p+0��== 'a'
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//�Ƿ�����	err
	////printf("%d\n", strlen(p[0]));//�Ƿ����� err
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}