#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC128-С���ּ������
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


//BC137-KiKi�ж������Ǿ���
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10][10] = { 0 };
    int i = 0;
    int j = 0;
    //�ж�
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i > j)
            {
                //�������в���0�ľͲ�����
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

