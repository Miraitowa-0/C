#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC59 - ��תֱ��������ͼ��
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //��ӡ����
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //��ӡһ��
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


//BC60 - ���ո��ֱ��������
//����1
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //����
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //�ո�
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

//����2
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


//BC61-������ͼ��
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

//BC62-��ת������ͼ��
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //����
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //�ո�
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

//BC63-����ͼ��
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //�ϰ벿�� n��
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //�ո�
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
//        //�°벿�� n+1��
//        for (i = 0; i < n + 1; i++)
//        {
//            //�ո�
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


//BC64-K��ͼ��
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //�� n
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //*
//            int j = 0;
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            //�ո�
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        //�� n+1
//        for (i = 0; i < n + 1; i++)
//        {
//            //*
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            //�ո�
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC65-����ͼ��
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //�� n
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            //˫�ո� 2���ո�Ϊ1��
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
//        //�� n+1
//        for (i = 0; i < n + 1; i++)
//        {
//            //˫�ո� 2���ո�Ϊ1��
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


//BC66-��б����ͼ��
//����1
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //�ո�
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            //*
//            printf("*");
//            //�ո�
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//����2
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


//BC67-��б����ͼ��
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


//BC68-X��ͼ��
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
//                //���Խ��� i==j
//                //���Խ��� i+j==n-1
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


//BC69-����������ͼ��
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
//                //�ҹ���
//                //��1�к����1�д�ӡ*
//                //��1�к����1�д�ӡ*
//                //�����ӡ�ո� 2���ո�Ϊһ��
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


//BC70-����������ͼ��
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
//                //��һ�к����һ�кͶԽ��ߴ�ӡ*
//                //�����ӡ�ո� 2���ո�Ϊһ��
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