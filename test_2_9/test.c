#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC101 - 班级成绩输入输出
//int main()
//{
//    int i = 0;
//    int j = 0;
//    //5个学生
//    for (i = 0; i < 5; i++)
//    {
//        double score = 0.0;
//        double sum = 0.0;
//        //每个学生的成绩+总分
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


//BC102-矩阵元素定位
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


//BC103-序列重组矩阵
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int num = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    //i从1开始 若从0开始，打印第一个元素后就会换行
//    for (i = 1; i <= n * m; i++)
//    {
//        scanf("%d", &num);
//        printf("%d ", num);
//        //每行元素数等于列数就换行
//        if (i % m == 0)
//            printf("\n");
//    }
//    return 0;
//}

//BC104-最高身高
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
//                //max记录最高的身高
//                //x和y记录最高身高的下标
//                max = hight;
//                x = i;
//                y = j;
//            }
//        }
//    }
//    //数组下标从0开始，实际输出要横纵坐标+1 
//    printf("%d %d", x + 1, y + 1);
//    return 0;
//}


//BC105-矩阵相等判断
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
//            //只要两个元素不相等，直接结束程序
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


//BC106-上三角矩阵判断
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
//            //边输入边判断，若下三角输入有一个不为0，结束程序
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


//BC107-矩阵转置
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    //2行3列
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //3行2列
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


//BC108-矩阵交换
//int main()
//{
//    int n = 0;//行
//    int m = 0;//列
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    //读取数据
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //操作的次数
//    int count = 0;
//    scanf("%d", &count);
//    //代表操作的字符
//    char op = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < count; i++)
//    {
//        //读取操作指令
//        //消耗 %c 后的所有后继空白符，然后读一个 char
//        scanf(" %c %d %d", &op, &a, &b);
//        //执行操作
//        if (op == 'r')
//        {
//            //交换a和b行
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (op == 'c')
//        {
//            //交换a和b列
//            for (j = 0; j < n; j++)
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    //输出
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


//BC109-杨辉三角
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
//                //每个数等于它左上方和上方的两数之和
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



//BC110-井字棋
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
    //判断输赢
    for (i = 0; i < 3; i++)
    {
        //判断行
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][2] != 'O')
        {
            flag = arr[i][1];
            break;
        }
        //判断列
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[2][i] != 'O')
        {
            flag = arr[1][i];
            break;
        }
    }
    //判断主对角线
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
        flag = arr[1][1];
    //判断副对角线
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