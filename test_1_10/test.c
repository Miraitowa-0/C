#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>
//�ַ��������ַ�������1.1
//1.7 strncmp
//int strncmp(const char* str1, const char* str2, size_t num);
//�Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ���
//int main()
//{
//	char* str1 = "abcdef";
//	char* str2 = "abcf";
//	int ret = strncmp(str1, str2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr example 
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch = NULL;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	printf("%s\n", str);//This is a sample string
//	return 0;
//}


//1.8 strstr �����Ӵ� �ҵ������״γ��ֵ��ִ��ĵ�ַ �Ҳ������ؿ�ָ��
//char* strstr(const char* str1, const char* str2);
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2=='\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0')
//		{
//			return cur;//�ҵ��ִ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����ִ�
//}
//int main()
//{
//	char* str1 = "abbbcdef";
//	char* str2 = "bbc";
//	char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}


//1.9 strtok
//char* strtok(char* str, const char* sep);
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣
//��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣

//strtok example 
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s ", pch);//This a sample string
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
//int main()
//{
//	char* str = "lilongxiang1029@gmail.com";
//	const char* sep = "@.";
//	char arr[30];
//	char* p = NULL;
//	strcpy(arr, str); //�����ݿ���һ�ݣ�����arr���������
//	for (p = strtok(arr, sep); p != NULL; p = strtok(NULL, sep))
//	{
//		printf("%s ", p);
//	}
//	return 0;
//}


//1.10 strerror
//char* strerror(int errnum);
//���ش����룬����Ӧ�Ĵ�����Ϣ��
//������			������Ϣ
//	0				No error
//	1				Operation not permitted
//	2				No such file or directory
//......
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//errno��һ��ȫ�ֵĴ�����ı���
//		//��C���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}


//�ַ�ת����
//int tolower(int c); תСд
//int toupper(int c); ת��д	
/* isupper example */
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//		{
//			c = tolower(c);
//		}	
//		printf("%c",c);
//		i++;
//	}
//	return 0;
//}