#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//BC111-С���������ת��
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[40] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n = n / 6;
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}

//BC112-С�������
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    //�Ȳ�������͹�ʽ
//    printf("%lld", (1 + n) * n / 2);
//    return 0;
//}

//BC113-С���ֶ�����
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    //����Сʱ�����������ڣ��ȼ���õ��ܹ�����Сʱ���ٶ�24ȡ�࣬�Է����ִ���24�����
//    h = ((m + k) / 60 + h) % 24;
//    //����ʣ�¶��ٷ���
//    m = (m + k) % 60;
//    printf("%02d:%02d", h, m);
//    return 0;
//}

//BC114-С�����ŵ���
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", n / 12 * 4 + 2);
//    return 0;
//}

//BC115-С������ŷ�����
//int main()
//{
//    long long n, m = 0;
//    long long max = 0;//���Լ��
//    long long min = 0;//��С������
//    long long tmp = 0;
//    scanf("%lld %lld", &n, &m);
//    //�Ƚ�n��m���б��棬��ֹ����ʹ��շת����ķ���Ӱ��n��m��ֵ
//    long long a = n;
//    long long b = m;
//    //շת�����
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    //��С������=n*m/max
//    min = a * b / max;
//    printf("%lld", max + min);
//    return 0;
//}


//BC116-С���ָ�����
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 0;
//    int i = 0;
//    while (n)
//    {
//        //����ÿһλ
//        int w = n % 10;
//        //�ж���ż��
//        if (w % 2 == 1)
//            w = 1;
//        else
//            w = 0;
//        //��Ȩ�غ��ۼ�    
//        ret += w * pow(10, i);
//        n /= 10;
//        i++;
//    }
//    printf("%d\n", ret);
//    return 0;
//}

//BC107-С������̨��
//쳲���������
//int fib(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", fib(n));
//    return 0;
//}

//BC118-С���ֺ�����
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100001] = { 0 };
//    int i = 0;
//    int tmp = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}


//BC119-С�������ַ���
//�����������Ӵ�
//ֻҪ���ַ������ҵ������ַ�����ϳ��Ӵ������ǡ��Ӵ���
//ch�ĸ�����ǰ����ֵ�c�ĸ����йأ�chn�ĸ�����n֮ǰch�ĸ����й�
//int main()
//{
//    char str[8000] = { 0 };
//    scanf("%s", str);
//    char* p = str;
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    while (*p)
//    {
//        if (*p == 'C')
//            c++;
//        else if (*p == 'H')
//            ch += c;
//        else if (*p == 'N')
//            chn += ch;
//        p++;
//    }
//    printf("%lld", chn);
//    return 0;
//}


//BC123-С�����������
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //�������ֵΪ������Ԫ��
//    int max = arr[0];
//    for (i = 0; i < 4; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf("%d\n", max);
//    return 0;
//}

//BC125-С����ת���ɼ�
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score < 0 || score>100)
//        printf("F\n");
//    else if (score >= 90 && score <= 100)
//        printf("A\n");
//    else if (score >= 80 && score <= 89)
//        printf("B\n");
//    else if (score >= 70 && score <= 79)
//        printf("C\n");
//    else if (score >= 60 && score <= 69)
//        printf("D\n");
//    else
//        printf("E\n");
//    return 0;
//}

//BC129-С���ּ��㺯��
//int max3(int a, int b, int c)
//{
//    int max = a > b ? a : b;
//    max = max > c ? max : c;
//    return max;
//}
//int main()
//{
//    int a, b, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    float m = ((float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//    printf("%.2f", m);
//    return 0;
//}