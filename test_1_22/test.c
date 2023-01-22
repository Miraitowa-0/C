#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//�ļ�����1.1
//���������� fread 
//��������� fwrite 
//struct PeoInfo
//{
//	char name[20];
//	int age;
//	double height;
//};
//int main()
//{
//	//struct PeoInfo p = { "�ɴ�Ѽ",8,5.5 };
//	struct PeoInfo tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct PeoInfo), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.height);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//5. �ļ��������д
//5.1 fseek �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int fseek ( FILE * stream, long int offset, int origin );
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��λ�ļ�ָ��
//	fseek(pf, -3, SEEK_END);
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//5.2 ftell
//long int ftell(FILE* stream);
/* ftell example : getting size of a file */
//int main()
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("test.txt", "rb");
//	if (pFile == NULL)
//	{
//		perror("Error opening file");
//	}
//	else
//	{
//		fseek(pFile, 0, SEEK_END);
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("Size of test.txt: %ld bytes.\n", size);
//	}
//	return 0;
//}


//5.3 rewind ���ļ�ָ���λ�ûص��ļ�����ʼλ��
//void rewind ( FILE * stream );
/* rewind example */
//int main()
//{
//	int n;
//	FILE* pFile;
//	char buffer[27];
//	pFile = fopen("test.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//	{
//		fputc(n, pFile);
//	}
//	rewind(pFile);
//	fread(buffer, 1, 26, pFile);
//	fclose(pFile);
//	pFile = NULL;
//	buffer[26] = '\0';
//	puts(buffer);
//	return 0;
//}


//7. �ļ���ȡ�������ж�
//7.1 ������ʹ�õ�feof
//�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
//����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
//1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�Ϊ EOF �� fgetc �������� NULL �� fgets ��
//���磺
//fgetc �ж��Ƿ�Ϊ EOF . ʵ���� EOF ��ֵͨ��Ϊ -1
//fgets �жϷ���ֵ�Ƿ�Ϊ NULL .
//2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
//���磺
//fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
int main()
{
	int c=0; // ע�⣺int����char��Ҫ����EOF
	FILE* pf = fopen("test.txt", "r");
	if (!pf) {
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
	while ((c = fgetc(pf)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
	{
		putchar(c);
	}
	printf("\n");
	//�ж���ʲôԭ�������
	if (ferror(pf))
	{
		puts("I/O error when reading");
	}
	else if (feof(pf))
	{
		puts("End of file reached successfully");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}