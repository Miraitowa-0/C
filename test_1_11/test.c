#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//�ַ��������ַ�������1.2

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "xyz";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	//strncpy()ֻ�ܿ����ַ��� �޷��������Σ��ṹ���
//	//err
//	int arr3[10] = { 0 };
//	int arr4[] = { 1,2,3,4,5 };
//	strncpy(arr1, arr2, sizeof(arr2));
//	int i = 0;
//	for (i < 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);	//1 0 0 0 0 0 0 0 0 0 
//	}
//	return 0;
//}

/* memcpy example */
//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//	//using memcpy to copy string: 
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	//using memcpy to copy structure: 
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//	//person_copy: Pierre de Fermat, 46
//	return 0;
//}


//1.11 memcpy
//void* memcpy(void* destination, const void* source, size_t num);
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//������������� '\0' ��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ����ġ�

//struct student
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	//������������
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3,4,5 };
//	memcpy(arr1, arr2, sizeof(arr2));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	//�����ṹ��
//	struct student s1[] = { {"����",20},{"����"},22 };
//	struct student s2[3] = { 0 };
//	memcpy(s2, s1, sizeof(s1));
//	return 0;
//}


//ģ��ʵ��memcpy
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)src;
//		++(char*)dest;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3,4,5 };
//	my_memcpy(arr1, arr2, sizeof(arr2));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//1.12 memmove
//void* memmove(void* destination, const void* source, size_t num);
//��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص��ġ�
//���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,4,5 };
//	memmove(arr1+3, arr2, sizeof(arr2));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//ģ��ʵ��memmove
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ->�� ����
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)src;
//			++(char*)dest;
//		}
//	}
//	else
//	{
//		//��->ǰ ����
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//			
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,4,5 };
//	my_memmove(arr1, arr2+2, 12);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}