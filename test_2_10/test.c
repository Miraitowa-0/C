#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//BC111-小乐乐与进制转换
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

//BC112-小乐乐求和
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    //等差数列求和公式
//    printf("%lld", (1 + n) * n / 2);
//    return 0;
//}

//BC113-小乐乐定闹钟
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    //计算小时，不考虑日期，先计算得到总共多少小时，再对24取余，以防出现大于24的情况
//    h = ((m + k) / 60 + h) % 24;
//    //计算剩下多少分钟
//    m = (m + k) % 60;
//    printf("%02d:%02d", h, m);
//    return 0;
//}

//BC114-小乐乐排电梯
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", n / 12 * 4 + 2);
//    return 0;
//}

//BC115-小乐乐与欧几里得
//int main()
//{
//    long long n, m = 0;
//    long long max = 0;//最大公约数
//    long long min = 0;//最小公倍数
//    long long tmp = 0;
//    scanf("%lld %lld", &n, &m);
//    //先将n和m进行保存，防止下面使用辗转相除的方法影响n和m的值
//    long long a = n;
//    long long b = m;
//    //辗转相除法
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    //最小公倍数=n*m/max
//    min = a * b / max;
//    printf("%lld", max + min);
//    return 0;
//}


//BC116-小乐乐改数字
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 0;
//    int i = 0;
//    while (n)
//    {
//        //计算每一位
//        int w = n % 10;
//        //判断奇偶数
//        if (w % 2 == 1)
//            w = 1;
//        else
//            w = 0;
//        //求权重后累加    
//        ret += w * pow(10, i);
//        n /= 10;
//        i++;
//    }
//    printf("%d\n", ret);
//    return 0;
//}

//BC107-小乐乐走台阶
//斐波那契数列
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

//BC118-小乐乐和序列
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


//BC119-小乐乐与字符串
//不是连续的子串
//只要在字符串中找到几个字符能组合成子串就算是“子串”
//ch的个数和前面出现的c的个数有关，chn的个数和n之前ch的个数有关
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


//BC123-小乐乐找最大数
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //假设最大值为数组首元素
//    int max = arr[0];
//    for (i = 0; i < 4; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf("%d\n", max);
//    return 0;
//}

//BC125-小乐乐转换成绩
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

//BC129-小乐乐计算函数
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