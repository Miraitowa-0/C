#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC128-小乐乐计算求和
//int fac(int n)
//{
//    int i = 0;
//    int fac = 1;
//    int sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        fac *= i;
//        sum += fac;
//    }
//    return sum;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = fac(n);
//    printf("%d", sum);
//    return 0;
//}


//BC137-KiKi判断上三角矩阵
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10][10] = { 0 };
    int i = 0;
    int j = 0;
    //判断
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i > j)
            {
                //下三角有不是0的就不满足
                if (arr[i][j] != 0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}

