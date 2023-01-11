#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//字符函数和字符串函数1.2

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "xyz";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	//strncpy()只能拷贝字符串 无法拷贝整形，结构体等
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
//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
//这个函数在遇到 '\0' 的时候并不会停下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的。

//struct student
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	//拷贝整形数组
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3,4,5 };
//	memcpy(arr1, arr2, sizeof(arr2));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	//拷贝结构体
//	struct student s1[] = { {"张三",20},{"李四"},22 };
//	struct student s2[3] = { 0 };
//	memcpy(s2, s1, sizeof(s1));
//	return 0;
//}


//模拟实现memcpy
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
//和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
//如果源空间和目标空间出现重叠，就得使用memmove函数处理。
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


//模拟实现memmove
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后 拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)src;
//			++(char*)dest;
//		}
//	}
//	else
//	{
//		//后->前 拷贝
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