#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//BC72-ƽ�����
//int main()
//{
//    float h = 0.0;
//    float sum = 0.0;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &h);
//        sum += h;
//    }
//    printf("%.2f\n", sum / 5.0);
//    return 0;
//}

//BC73-�ҿ�Σ��
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score >= 10)
//        printf("Danger++\n");
//    else if (score >= 4 && score <= 9)
//        printf("Danger\n");
//    else if (score >= 0 && score <= 3)
//        printf("Good\n");
//    return 0;
//}
 
 
 
//BC74-HTTP״̬��
//int main()
//{
//    int state = 0;
//    while (scanf("%d", &state) != EOF)
//    {
//        switch (state)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}



//BC75-����������
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //��ӡ����
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            //��ӡһ�е�����
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC76-����Ա����
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int max = 0;//�������ֵ��0
//    int min = 100;//������Сֵ��100
//    int count = 0;//������
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//        sum += score;
//        count++;
//        if (count == 7)
//        {
//            printf("%.2f\n", (sum - max - min) / 5.0);
//            //���ü����� ���ֵ ��Сֵ �ܳɼ�
//            count = 0;
//            max = 0;
//            min = 100;
//            sum = 0;
//        }
//    }
//    return 0;
//}


//BC77-�������в���һ����
//int main()
//{
//    int n = 0;
//    int arr[51] = { 0 };
//    int m = 0;//Ҫ���������
//    //��������
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    //�����������
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > m)
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//        if (i == 0)
//        {
//            arr[0] = m;
//        }
//    }
//    //�Ӻ���ǰ�Ƚ����֣��ҵ����ʵ�λ�ã��Ϳ��Բ��������ˣ�
//    //���������������ֱ����е�Ԫ�ض�С���ǾͲ��뵽��һ��λ����
//    //�������
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//BC78-ɸѡ��������
//ɸѡ��
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int arr[101];
//        //��ʼ����������
//        int i = 0;
//        for (i = 2; i <= n; i++)
//        {
//            arr[i] = i;
//        }
//        //ɸѡ        
//        int j = 0;//jΪ����
//        for (j = 2; j <= n; j++)
//        {
//            int k = 0;//kΪ������
//            for (k = j + 1; k <= n; k++)
//            {
//                if (arr[k] % j == 0)
//                    arr[k] = 0;
//            }
//        }
//        //�������¼
//        int count = 0;
//        for (i = 2; i <= n; i++)
//        {
//            if (arr[i] != 0)
//                printf("%d ", arr[i]);
//            else
//                count++;
//        }
//        printf("\n%d\n", count);
//    }
//
//    return 0;
//}



//�൱�ڴ�ӡn���ڵ�����
//�Գ���
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;//������������0
//	}
//	return 1;//����������1
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		
//		int i = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (is_prime(i) == 1)
//			{
//				printf("%d ", i);
//			}
//			else
//			{
//				count++;
//			}		
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}



//BC79-ͼ�����ƶ�
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int count = 0;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    //���뼸�м���
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    //����n��n�еĶ�ά����
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //�ڶ�ά����������ͬԪ�صĸ���
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//        }
//    }
//    //������ƶ�
//    printf("%.2f\n", 100.0 * count / (m * n));
//    return 0;
//}


//BC80-��֤��¼
//int main()
//{
//    char name[20] = { 0 };
//    char password[20] = { 0 };
//    while (scanf("%s %s", &name, &password) != EOF)
//    {
//        // �����ַ����Ƚϴ�С����ʹ��==����ʹ��strcmp������
//        //�Ƚϵ��������ַ� ���ж�Ӧ�ַ���ASCII��ֵ
//        if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0)
//            printf("Login Success!\n");
//        else
//            printf("Login Fail!\n");
//    }
//    return 0;
//}



//BC85-��������9����
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        //�ж�i�Ƿ����9
//        //Ҫ�ж�һ�������Ƿ����9���Ϳ�һ��������ֵ�ĳһλ�Ƿ�Ϊ9���ɣ�
//        //ֻҪĳһλΪ9��ͣ������
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            m = m / 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//BC86-��żͳ��
//����1
//int main()
//{
//    int n = 0;
//    int odd = 0;//�����ĸ���
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 1)
//            odd++;
//    }
//    printf("%d %d\n", odd, n - odd);
//    return 0;
//}


//����2
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//���n��ż������������ż��һ���࣬����n/2
//	//���n����������������ż����1�������� n/2 + 1  ż���� n/2
//	if (n % 2 == 1)
//		printf("%d %d\n", n / 2 + 1, n / 2);
//	else
//		printf("%d %d\n", n / 2, n / 2);
//	return 0;
//}