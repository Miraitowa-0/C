#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���init(),��ʼ��Ԫ��ȫΪ0
//2.ʵ��print(),��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()��ɺ���������
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//��������
//������arr1�е����ݺ�arr2�е����ݽ���������һ����
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//ǿ��ת��Ϊshort*��ָ�� ÿ�η���2���ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//0 0 3 4 5
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;//���ڴ��е��Ŵ�ţ�44332211 ���������11223344
//	char* pc = (char*)&a;//ǿ��ת��Ϊchar*��ָ�� ÿ�η���1���ֽ�
//	*pc = 0;//�����ò��� ���ڴ��е�һ���ֽڵ�ֵ��Ϊ00  00332211
//	printf("%x\n", a);//���������11223300
//	return 0;
//}


//int i;//ȫ�ֱ���-����ʼ��-Ĭ����0
//int main()
//{
//	i--;
//	//i=-1
//	//10000000000000000000000000000001 Դ��
//	//11111111111111111111111111111110 ����
//	//11111111111111111111111111111111 ����
//	if (i > sizeof(i))//sizeof()����������͵Ĵ�С �����0 ���޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//дһ��������ͳ�ƶ�������1�ĸ���
//����1
//int count_bit_one(unsigned int n)//�Ѹ����ķ���λ������Чλ �����޷�����������
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}


//����2
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//��n��ÿһ������λ��1,���Ϊ1���������+1 ����ȫΪ1��Ϊ1 ��һ��0��Ϊ0
//		//����n=-1
//		//11111111111111111111111111111111
//		//00000000000000000000000000000001
//		//00000000000000000000000000000001	�õ�һ��1��Ȼ��n�������ƣ�������λ��1��ѭ��31��
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//����3
//int count_bit_one(int n)
//{
//	//����
//	// n=13				1101
//	//n-1=12			1100
//	//n=n&(n-1)=12		1100		
//	//n-1=11			1011
//	//n=n&(n-1)=8		1000
//	//n-1=7				0111
//	//n=n&(n-1)=0		0000	
//	//���ۣ� ÿ�� n&(n-1) �õ��� �µ�n ����ʹ ԭ����n ���ұߵ�1 ��ʧ
//	//ѭ������ ��������¼��ʧ��1�Ĵ��� ֱ�� n=0
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d", count);
//}


//��������в�ͬλ�ĸ���
//����int����m��n�Ķ����Ʊ���У��ж��٣�bit��λ��ͬ��
//���� ���� 1999 2299 �����7
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;	//m^n ��λ�� ��ͬΪ1 ��ͬΪ0
//	//count_bit_one(tmp);	//������������м���1�ĺ���
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count =%d ", count);
//	return 0;
//}


//��ȡһ���������������������е�����λ��ż��λ���ֱ��ӡ������������
//void print(int n)
//{
//	printf("����λ��");
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//����������������������ʱ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ�� a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������ a=%d b=%d\n", a, b);
//	return 0;
//}


//дһ��������ӡ����arr�����ݣ�����ʹ�������±꣬ʹ��ָ��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//��ӡ�˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d",j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//�����ַ���
//����abcdef	�����fedcba
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//�ݹ麯��
//����
//���룺1729
//�����19		1+7+2+9=19
//int DigitSum(int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}



//��д���� ʵ��n��k�η�
//double Pow(int n, int k)
//{
//	//n^k= n * n^(k-1)
//	if (k < 0)
//	{
//		return (1.0 / (Pow(n, -k)));
//	}
//	else if(k ==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n* Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}