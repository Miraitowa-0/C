#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
//文件操作1.1
//二进制输入 fread 
//二进制输出 fwrite 
//struct PeoInfo
//{
//	char name[20];
//	int age;
//	double height;
//};
//int main()
//{
//	//struct PeoInfo p = { "可达鸭",8,5.5 };
//	struct PeoInfo tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct PeoInfo), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.height);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//5. 文件的随机读写
//5.1 fseek 根据文件指针的位置和偏移量来定位文件指针
//int fseek ( FILE * stream, long int offset, int origin );
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//定位文件指针
//	fseek(pf, -3, SEEK_END);
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
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


//5.3 rewind 让文件指针的位置回到文件的起始位置
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


//7. 文件读取结束的判定
//7.1 被错误使用的feof
//牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束
//1. 文本文件读取是否结束，判断返回值是否为 EOF （ fgetc ），或者 NULL （ fgets ）
//例如：
//fgetc 判断是否为 EOF . 实际上 EOF 的值通常为 -1
//fgets 判断返回值是否为 NULL .
//2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
//例如：
//fread判断返回值是否小于实际要读的个数。
int main()
{
	int c=0; // 注意：int，非char，要求处理EOF
	FILE* pf = fopen("test.txt", "r");
	if (!pf) {
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
	while ((c = fgetc(pf)) != EOF) // 标准C I/O读取文件循环
	{
		putchar(c);
	}
	printf("\n");
	//判断是什么原因结束的
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