#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��̬�ڴ����1.1
//��������ı�����
//4.1 ��Ŀ1����������Test��������ʲô���Ľ����
//1 ������� 2 �ڴ�й©  
//str��ֵ���ݵ���ʽ����p p��GetMemory()���β� ֻ�ں����ڲ���Ч
//��GetMemory()���غ󣬶�̬�����ڴ�δ�ͷţ������޷��ҵ������Ի��ڴ�й©
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�Ľ�1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�Ľ�2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//4.2 ��Ŀ2����������Test ��������ʲô���Ľ����
//����ջ�ռ�ĵ�ַ�����⣺
//�ַ�����p��ջ�ڴ��п��ٿռ� ����GetMemory()������ 
//��ʱstrָ���p�������ѱ����� ���ַǷ�����
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�Ľ�
//char* GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//4.3 ��Ŀ3����������Test ��������ʲô���Ľ����
//û���ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
//ַ���ݣ�pΪ����ָ�룬���str�ĵ�ַ *p�����õõ�str ��malloc()���ٵĶ�̬�ڴ��ַ���ݸ�str
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�Ľ�
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.4 ��Ŀ4����������Test ��������ʲô���Ľ����
//free()�ͷ�strָ����ڴ�󣬲��Ὣstr��ΪNULL 
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}


//�Ľ�
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}