#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//BC23-ʱ��ת��
//int main()
//{
//    int seconds = 0;
//    int h = 0;
//    int m = 0;
//    int s = 0;
//    scanf("%d", &seconds);
//    h = seconds / 60 / 60;//����Сʱ
//    m = seconds / 60 % 60;//������� ȡģ60����ȥ����ת����Сʱ�ķ���
//    s = seconds % 60;//�������� ȥ����ת���ɷ��ӵ�����
//    printf("%d %d %d", h, m, s);
//    return 0;
//}


//BC24-�ܳɼ���ƽ���ּ���
//����1
//int main()
//{
//    double score = 0.0;
//    double sum = 0.0;
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%lf", &score);
//        sum += score;
//    }
//    printf("%.2lf %.2lf", sum, sum / 3);
//    return 0;
//}

//����2
//int main()
//{
//    double score[3] = { 0 };
//    scanf("%lf %lf %lf", &score[0], &score[1], &score[2]);
//    double sum = score[0] + score[1] + score[2];
//    double avg = sum / 3.0;
//    printf("%.2lf %.2lf", sum, avg);
//    return 0;
//}



//BC30-kiki������
//int main()
//{
//    int n = 0;//��������
//    int h = 0;//��һƿ������Ҫ������
//    int m = 0;//�������ܷ�����
//    while ((scanf("%d %d %d", &n, &h, &m)) != EOF)
//    {
//        if (m % h)
//        {
//            printf("%d", n - m / h - 1);
//        }
//        else
//        {
//            printf("%d", n - m / h);
//        }
//    }
//    return 0;
//}


//BC31-��������Ϣ
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}


//BC32-���ѧ����Ϣ
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//    return 0;
//}


//BC33-����ƽ���ɼ�
//int main()
//{
//    int i = 0;
//    int sum = 0;
//    int input = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &input);
//        sum += input;
//    }
//    printf("%.1f\n", sum / 5.0);
//}


//BC34-����A+B
//int main()
//{
//    int a = 0;
//    int b = 0;
//    //%x ��16���Ƶĸ�ʽ����
//    //%o ��8���Ƶĸ�ʽ����
//    scanf("%x %o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}


//BC37-����
//int main()
//{
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    double cut = 0.0;
//    scanf("%lf %d %d %d", &price, &month, &day, &flag);
//    if (month == 11 && day == 11)
//    {
//        cut = 0.7;
//    }
//    else if (month == 12 && day == 12)
//    {
//        cut = 0.8;
//    }
//    price = price * cut - flag * 50.0;
//    if (price < 0.0)
//    {
//        price = 0.0;
//    }
//    printf("%.2lf", price);
//    return 0;
//}


//BC39-����ǰ����
//����1
//int main()
//{
//    int n = 0;
//    //score�����ųɼ�
//    int score[40] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score[i]);
//    }
//    //��������������-ð������
//
//    //ð�����������
//    for (i = 0; i < n - 1; i++)
//    {
//        //ÿһ��ð������Ҫ�������ٶ�Ԫ��
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            //��������
//            if (score[j] < score[j + 1])
//            {
//                //����Ԫ��
//                int tmp = score[j];
//                score[j] = score[j + 1];
//                score[j + 1] = tmp;
//            }
//        }
//    }
//    //����ɼ�
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", score[i]);
//    }
//    return 0;
//}



//����2
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int score[40] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	//ʹ�ÿ⺯������
//	qsort(score, n, 4, cmp_int);
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", score[--n]);
//	}
//	return 0;
//}