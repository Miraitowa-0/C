#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//6. ��������
//C99 �У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��
//���磺
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;


//6.1 ����������ص㣺
//�ṹ�е����������Աǰ���������һ��������Ա��
//sizeof ���ص����ֽṹ��С����������������ڴ档
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��
//���磺
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//int main()
//{
//	printf("%d\n", sizeof(type_a));//����ľ���4
//	return 0;
//}



//6.2 ���������ʹ��
//����1
//struct st_type
//{
//	int i;
//	int arr[0];
//};
//int main()
//{
//	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 5 * sizeof(int));
//	//��̬�ڴ濪���� 4 + 5*4 = 24 ���ֽ��ڴ�
//	if (ps != NULL)
//	{
//		ps->i = 100;
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;
//		}
//	}
//	struct st_type* ptr=realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}



//����2
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//int main()
//{
//	int i = 0;
//	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
//  //�������������Աa���൱�ڻ����100������Ԫ�ص������ռ䡣
//	//ҵ����
//	p->i = 100;
//	for (i = 0; i < 100; i++)
//	{
//		p->a[i] = i;
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//6.3 �������������
//������ type_a �ṹҲ�������Ϊ��
//����3
//typedef struct st_type
//{
//	int i;
//	int* p_a;
//}type_a;
//int main()
//{
//	type_a* p = (type_a*)malloc(sizeof(type_a));
//	p->i = 100;
//	p->p_a = (int*)malloc(p->i * sizeof(int));
//	//ҵ����
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		p->p_a[i] = i;
//	}
//	//�ͷſռ�
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}
//���� ����2 �� ����3 �������ͬ���Ĺ��ܣ����� ����2 ��ʵ���������ô���
//��һ���ô��ǣ������ڴ��ͷ�
//������ǵĴ�������һ���������õĺ����У������������˶����ڴ���䣬���������ṹ�巵�ظ�
//�û����û�����free�����ͷŽṹ�壬�����û�����֪������ṹ���ڵĳ�ԱҲ��Ҫfree��������
//����ָ���û�����������¡����ԣ�������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է����
//�ˣ������ظ��û�һ���ṹ��ָ�룬�û���һ��free�Ϳ��԰����е��ڴ�Ҳ���ͷŵ�
//�ڶ����ô��ǣ������ڷ����ٶ�
//�������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ

