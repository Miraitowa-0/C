#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//5. ����ָ��
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	print("hello world");
//	void(*pf)(char*) = print;
//	(*pf)("hello world");
//	return 0;
//}
//int main()
//{
//	//����1
//	(*(void (*)())0)();
//	//��0ǿ��ת��Ϊ��void(*)() ����ָ�����ͣ�0����һ�������ĵ�ַ
//	// ��0(������ַ)������,���øú���
//	
//
//
//	//����2
//	void (*signal(int, void(*)(int)))(int);
//	//signal��һ����������
//	//signal��������������,һ������Ϊint,��һ������Ϊ����ָ��,�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
//	//signal�����ķ��������Ǻ���ָ��,�ú���ָ��ָ��ĺ����Ĳ���Ϊint,����������void
//
//	//����2��
//	typedef unsigned int uint;
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	return 0;
//}
 



//int Add(int x, int y)
//{
//	int z = 0;
//	return z = x + y;
//}
//int main()
//{
//	int (*p)(int, int) = Add;
//	printf("%d\n", (*p)(2, 5));
//	printf("%d\n", Add(2, 5));
//	printf("%d\n", p(2, 5));
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf,�ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
//2.дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);


//������
//void menu()
//{
//	printf("********************\n");
//	printf("**  1.add  2.sub  **\n");
//	printf("**  3.mul  4.div  **\n");
//	printf("**  5.xor  0.exit **\n");
//	printf("********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////�������
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}

//�ú���ָ�������ʵ��
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr��һ������ָ������� - ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);//���ú���
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������,����������\n");
//		}
//		
//
//	} while (input);
//	return 0;
//}


//�ûص�����ʵ��
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//7. ָ����ָ�������ָ��
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//����ָ��pfun
//	void (*pfun)(const char*) = test;
//	//����ָ�������pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//
//
//	//ָ����ָ������pfunArr��ָ��ppfunArr
//	//ָ��ppfunArrָ����ָ������ �ú���ָ��������5��Ԫ�أ�ÿ��Ԫ�ض���һ������ָ��
//	void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//	return 0;
//}
