#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC101 - �༶�ɼ��������
//int main()
//{
//    int i = 0;
//    int j = 0;
//    //5��ѧ��
//    for (i = 0; i < 5; i++)
//    {
//        double score = 0.0;
//        double sum = 0.0;
//        //ÿ��ѧ���ĳɼ�+�ܷ�
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &score);
//            sum += score;
//            printf("%.1lf ", score);
//        }
//        printf("%.1lf\n", sum);
//    }
//    return 0;
//}


//BC102-����Ԫ�ض�λ
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int x = 0;
//    int y = 0;
//    int arr[5][5] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    scanf("%d %d", &x, &y);
//    printf("%d\n", arr[x - 1][y - 1]);
//    return 0;
//}


//BC103-�����������
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int num = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    //i��1��ʼ ����0��ʼ����ӡ��һ��Ԫ�غ�ͻỻ��
//    for (i = 1; i <= n * m; i++)
//    {
//        scanf("%d", &num);
//        printf("%d ", num);
//        //ÿ��Ԫ�������������ͻ���
//        if (i % m == 0)
//            printf("\n");
//    }
//    return 0;
//}

//BC104-������
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int hight = 0;
//    int max = 0;
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &hight);
//            if (hight > max)
//            {
//                //max��¼��ߵ����
//                //x��y��¼�����ߵ��±�
//                max = hight;
//                x = i;
//                y = j;
//            }
//        }
//    }
//    //�����±��0��ʼ��ʵ�����Ҫ��������+1 
//    printf("%d %d", x + 1, y + 1);
//    return 0;
//}


//BC105-��������ж�
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            //ֻҪ����Ԫ�ز���ȣ�ֱ�ӽ�������
//            if (arr1[i][j] != arr2[i][j])
//            {
//                printf("No\n");
//                return 0;
//            }
//        }
//    }
//    printf("Yes\n");
//    return 0;
//}


//BC106-�����Ǿ����ж�
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            //��������жϣ���������������һ����Ϊ0����������
//            scanf("%d", &arr[i][j]);
//            if (i > j)
//                if (arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}


//BC107-����ת��
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    //2��3��
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //3��2��
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC108-���󽻻�
//int main()
//{
//    int n = 0;//��
//    int m = 0;//��
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    //��ȡ����
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //�����Ĵ���
//    int count = 0;
//    scanf("%d", &count);
//    //����������ַ�
//    char op = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < count; i++)
//    {
//        //��ȡ����ָ��
//        //���� %c ������к�̿հ׷���Ȼ���һ�� char
//        scanf(" %c %d %d", &op, &a, &b);
//        //ִ�в���
//        if (op == 'r')
//        {
//            //����a��b��
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (op == 'c')
//        {
//            //����a��b��
//            for (j = 0; j < n; j++)
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    //���
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC109-�������
//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4    1
//1    5   10   10    5    1

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (j == 0)
//                arr[i][j] = 1;
//            if (i == j)
//                arr[i][j] = 1;
//            if (i > 1 && j > 0)
//                //ÿ�������������Ϸ����Ϸ�������֮��
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//BC110-������
int main()
{
    char arr[3][3] = { 0 };
    char flag = 'c';
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%c", &arr[i][j]);
            getchar();
        }
    }
    //�ж���Ӯ
    for (i = 0; i < 3; i++)
    {
        //�ж���
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][2] != 'O')
        {
            flag = arr[i][1];
            break;
        }
        //�ж���
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[2][i] != 'O')
        {
            flag = arr[1][i];
            break;
        }
    }
    //�ж����Խ���
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
        flag = arr[1][1];
    //�жϸ��Խ���
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')
        flag = arr[1][1];
    if (flag == 'K')
        printf("KiKi wins!\n");
    else if (flag == 'B')
        printf("BoBo wins!\n");
    else
        printf("No winner!\n");
    return 0;
}