#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//�ַ��������ַ�������
//1.1 strlen
//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ�����
//�������� '\0' )��
//size_t strlen(const char* str);
//����ָ����ַ�������Ҫ�� '\0' ������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��
//ѧ��strlen������ģ��ʵ�� 3�ַ��������������ݹ飬ָ��-ָ��
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
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
//	int len = my_strlen("abcedf");
//	printf("len=%d\n", len);
//	return 0;
//}



//1.2 strcpy
//char* strcpy(char* destination, const char * source);
//Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).
//Դ�ַ���������'\0'������
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣
//ѧ��ģ��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ����ַ��� ����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//1.3 strcat
//char* strcat(char* destination, const char* source);
//Դ�ַ���������'\0'������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�
//�ַ����Լ����Լ�׷�ӣ���Σ�
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//1.4 strcmp
//intstrcmp(constchar* str1, constchar* str2);
//��׼�涨��
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//1.5 strncpy
//char* strncpy(char* destination, constchar * source, size_tnum);
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (*dest && count)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	while (count--)
//		*dest++ = '\0';
//	return tmp;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//1.6 strncat
//char* strncat(char* destination, constchar * source, size_tnum);
//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (*dest)
//		dest++;
//	while (count && *src)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 10);
//	printf("%s\n", arr1);
//}