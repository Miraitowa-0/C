#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��7��(�����)
//��Ŀ����:
//������
//��Ŀ����
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
//����Ϊ4�����ɷ��Ĺ���
//A˵: ������
//B˵: ��C
//c˵: ��D
//D˵: C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ�
//�����������Щ��Ϣ��дһ��������ȷ������˭������
//int main()
//{
//	//�滰Ϊ1 �ٻ�Ϊ0 4����˵�Ļ���ӵ���3 �����ҵ�����
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}

//���ݵĴ洢
//ע����������
//int main()
//{
//	//unsigned char ��Χ��0-255
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d\n", a + b, c);
//	//300 44
//	return 0;
//}


//��32λ���ģʽ�������� ����b=0
//int main()
//{
//	unsigned int a = 0x1234;
//	//ȡ��a�ĵ�ַ ǿ��ת��Ϊ�޷����ַ�ָ�� ÿ�η���1�ֽ�
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	//���ģʽ b=0
//	//С��ģʽ b=52
//	return 0;
//}



//int main()
//{
//	//char �ķ�Χ��-128-127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	// -1 -2 ...... -128 127 126 ......3 2 1 0
//	//strlen()���ַ������� ���� \0 0����
//	//����Ϊ:128+127=255
//	printf("%d\n", strlen(a));
//	return 0;
//}


//��ӡ�������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	//��ӡ��ά����
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}