#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//�ṹ���ʹ�õ��Լ���
//typedef struct stu
//{
//	char name[10];
//	int age;
//	char tele[12];
//	char sex[5];
//}stu;
////�ṹ�崫��
//void print1(stu s)
//{
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//}
//
////�ṹ���ַ����
//void print2(stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//}
//int main()
//{
//	stu s = { "����ѧ",20,"13783686338","��" };
//	print1(s);	//���ṹ��
//	print2(&s);	//����ַ
//	return 0;
//	//��ѡprint2����
//	//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//	//�������һ���ṹ������ʱ�򣬽ṹ�����
//	//����ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//}


//�� 1�� + 2�� + 3�� ... + n!�����������
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//�о�������ѭ����ԭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//ģ��ʵ�ֿ⺯����strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//���ַ�������
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//��ָ֤�����Ч��
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}