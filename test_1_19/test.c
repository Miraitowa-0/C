#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//C�����ļ�����
//3.2 �ļ��Ĵ򿪺͹ر�
//���ļ�
//FILE* fopen(const char* filename, const char* mode);
//�ر��ļ�
//int fclose(FILE* stream);


//int main()
//{
//	//��д����ʽ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}

//int main()
//{
//	//�Զ�����ʽ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}


/* fopen fclose example */
//int main()
//{
//	//��д����ʽ���ļ� 
//	FILE* pFile = fopen("myfile.txt", "w");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}


//int main()
//{
//	//��д����ʽ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ������ı��е���ʽ
//	char buf[100] = "hello world";
//	fputs(buf, pf);
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}


//int main()
//{
//	//�Զ�����ʽ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//���ļ������ı��е���ʽ
//	char buf[100] = { 0 };
//	fgets(buf, 100, pf);
//	printf("%s", buf);
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}


struct S
{
	int i;
	float score;
	char arr[10];
};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.i, s.score, s.arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ʽ������ʽ���ļ�
//	fscanf(pf, "%d %f %s", &(s.i), &(s.score), &(s.arr));
//	printf("%d %f %s", s.i, s.score, s.arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	//�Ѹ�ʽ������������ַ����洢��buf
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %f %s", s.i, s.score, s.arr);
//	printf("%s\n", buf);
//
//
//	//���ַ����ж�ȡ��ʽ�����ݵ�tmp��
//	struct S tmp = { 0 };
//	sscanf(buf, "%d %f %s", &(tmp.i), &(tmp.score), &(tmp.arr));
//	printf("%d %f %s", tmp.i, tmp.score, tmp.arr);
//}

//4.1 �Ա�һ�麯����
//scanf / fscanf / sscanf
//printf / fprintf / sprintf
//scanf/printf����Ա�׼������/��׼������ĸ�ʽ������/������
//fscanf/fprintf���������������/����������ĸ�ʽ������/������
//sscanf�Ǵ��ַ����ж�ȡ��ʽ��������
//sprintf�ǰѸ�ʽ������������ַ���