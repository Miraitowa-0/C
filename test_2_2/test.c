#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//BC15-���ո�ʽ���벢�������
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    int c = 0;
//    c = a;
//    a = b;
//    b = c;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}


//BC16 - �ַ�תASCII��
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    printf("%d", ch);
//    return 0;
//}


//BC17-��������ʽ��ֵ
//int main()
//{
//    int a = 40;
//    int c = 212;
//    int ret = (-8 + 22) * a - 10 + c / 2;
//    printf("%d", ret);
//    return 0;
//}


//BC18-����������
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int m = a / b;
//    int n = a % b;
//    printf("%d %d", m, n);
//    return 0;
//}


//BC25-��������ָ��
//int main()
//{
//    int weight = 0;
//    int high = 0;
//    double bim = 0.0;
//    scanf("%d %d", &weight, &high);
//    bim = weight / ((high / 100.0) * (high / 100.0));
//    printf("%.2lf", bim);
//    return 0;
//}



//BC26- ���������ε��ܳ������

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    double p = (a + b + c) / 2.0;
//    double circumference = 0.0;
//    double area = 0.0;
//    circumference = a + b + c;
//    area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2lf area=%.2lf", circumference, area);
//    return 0;
//}



//BC27-������������
//int main()
//{
//    double r = 0.0;
//    double pi = 3.1415926;
//    scanf("%lf", &r);
//    double v = 0.0;
//    v = (4 / 3.0) * pi * (r * r * r);
//    printf("%.3lf", v);
//    return 0;
//}


//BC10-�ɼ����������
//int main()
//{
//    int score[3] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &score[i]);
//    }
//    printf("score1=%d,score2=%d,score3=%d", score[0], score[1], score[2]);
//    return 0;
//}


//BC38-����ˮ�ɻ���
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        //�ж�i�Ƿ�Ϊlily number
//        int j = 10;
//        int sum = 0;
//        int tmp = i;
//        for (j = 10; j <= 10000; j *= 10)
//        {
//            sum += (tmp % j) * (tmp / j);
//        }
//        if (i == sum)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//BC20-kiki����
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int ret = 0;
//    scanf("%d %d", &a, &b);
//    ret = (a + b) % 100;
//    printf("%d", ret);
//    return 0;
//}


//BC24-�������ĸ�λ����
//int main()
//{
//    float n = 0.0;
//    int ret = 0;
//    scanf("%f", &n);
//    ret = ((int)n) % 10;
//    printf("%d", ret);
//    return 0;
//}


//BC32-���ܻ������
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    long long second = 0;
//    second = age * 3.156e7;
//    printf("%lld", second);
//    return 0;
//}