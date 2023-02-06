#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC59 - 翻转直角三角形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //打印行数
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //打印一行
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC60 - 带空格的直角三角形
//代码1
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //行数
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //空格
//            int j = 0;
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf("  ");
//            }
//            //*
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//代码2
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //i+j<n-1
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i + j < n - 1)
//                    printf("  ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC61-金字塔图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC62-翻转金字塔图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //行数
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //空格
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            //*
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC63-菱形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //上半部分 n行
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //空格
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            //*
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //下半部分 n+1行
//        for (i = 0; i < n + 1; i++)
//        {
//            //空格
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            //*
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC64-K形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //上 n
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //*
//            int j = 0;
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            //空格
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        //下 n+1
//        for (i = 0; i < n + 1; i++)
//        {
//            //*
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            //空格
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC65-箭形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //上 n
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //双空格 2个空格为1组
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            //*
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //下 n+1
//        for (i = 0; i < n + 1; i++)
//        {
//            //双空格 2个空格为1组
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            //*
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}


//BC66-反斜线形图案
//代码1
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //空格
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            //*
//            printf("*");
//            //空格
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//代码2
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC67-正斜线形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC68-X形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                //主对角线 i==j
//                //副对角线 i+j==n-1
//                if (i == j)
//                    printf("*");
//                else if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC69-空心正方形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                //找规律
//                //第1行和最后1行打印*
//                //第1列和最后1列打印*
//                //其余打印空格 2个空格为一组
//                if (i == 0 || i == n - 1)
//                    printf("* ");
//                else if (j == 0 || j == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC70-空心三角形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                //第一列和最后一行和对角线打印*
//                //其余打印空格 2个空格为一组
//                if ((j == 0) || (i == n - 1) || (i == j))
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}