#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//C语言文件操作
//3.2 文件的打开和关闭
//打开文件
//FILE* fopen(const char* filename, const char* mode);
//关闭文件
//int fclose(FILE* stream);


//int main()
//{
//	//以写的形式打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//关闭文件
//	fclose(pf);
//	return 0;
//}

//int main()
//{
//	//以读的形式打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	return 0;
//}


/* fopen fclose example */
//int main()
//{
//	//以写的形式打开文件 
//	FILE* pFile = fopen("myfile.txt", "w");
//	//文件操作
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		//关闭文件
//		fclose(pFile);
//	}
//	return 0;
//}


//int main()
//{
//	//以写的形式打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件，以文本行的形式
//	char buf[100] = "hello world";
//	fputs(buf, pf);
//	//关闭文件
//	fclose(pf);
//	return 0;
//}


//int main()
//{
//	//以读的形式打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//读文件，以文本行的形式
//	char buf[100] = { 0 };
//	fgets(buf, 100, pf);
//	printf("%s", buf);
//	//关闭文件
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
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.i, s.score, s.arr);
//	//关闭文件
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
//	//格式化的形式读文件
//	fscanf(pf, "%d %f %s", &(s.i), &(s.score), &(s.arr));
//	printf("%d %f %s", s.i, s.score, s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	//把格式化数据输出成字符串存储到buf
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %f %s", s.i, s.score, s.arr);
//	printf("%s\n", buf);
//
//
//	//从字符串中读取格式化数据到tmp中
//	struct S tmp = { 0 };
//	sscanf(buf, "%d %f %s", &(tmp.i), &(tmp.score), &(tmp.arr));
//	printf("%d %f %s", tmp.i, tmp.score, tmp.arr);
//}

//4.1 对比一组函数：
//scanf / fscanf / sscanf
//printf / fprintf / sprintf
//scanf/printf是针对标准输入流/标准输出流的格式化输入/输出语句
//fscanf/fprintf是针对所有输入流/所有输出流的格式化输入/输出语句
//sscanf是从字符串中读取格式化的数据
//sprintf是把格式化数据输出成字符串