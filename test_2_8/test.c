#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//BC87 - 成绩统计
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    float score = 0.0;
//    float sum = 0.0;
//    float avg = 0.0;
//    float max = 0.0;//假设最高分为0
//    float min = 100.0;//假设最低分为100
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &score);
//        sum += score;
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    avg = sum / n;
//    printf("%.2f %.2f %.2f", max, min, avg);
//    return 0;
//}


//BC89-密码验证
//int main()
//{
//    char s1[20] = { 0 };
//    char s2[20] = { 0 };
//    scanf("%s %s", s1, s2);
//    //字符串的比较函数使用strcmp函数
//    if (strcmp(s1, s2) == 0)
//        printf("same\n");
//    else
//        printf("different\n");
//    return 0;
//}


//BC90-矩阵计算
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    int sum = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &tmp);
//            //在输入的同时，将大于0的数求和
//            if (tmp > 0)
//            {
//                sum += tmp;
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//BC91-逆序输出
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//BC93-统计数据正负个数
//int main()
//{
//    int num = 0;
//    int i = 0;
//    int positive = 0;
//    int negative = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &num);
//        if (num >= 0)
//            positive++;
//        else
//            negative++;
//    }
//    printf("positive:%d\n", positive);
//    printf("negative:%d\n", negative);
//    return 0;
//}


//BC94-N个数之和
//int main()
//{
//    int n = 0;
//    int num = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        sum += num;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//BC95-最低分与最高分之差
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int score = 0;
//    int max = 0;
//    int min = 100;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    printf("%d\n", max - min);
//    return 0;
//}

//BC96-有序序列判断
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int flag1 = 0;//flag1表示升序
//    int flag2 = 0;//flag2表示降序
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//                flag1 = 1;
//            else
//                flag2 = 1;
//        }
//    }
//    //flag1 和 flag2 都为1是乱序的
//    if (flag1 + flag2 == 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}


//BC97 有序序列插入一个整数
//int main() {
//    int n = 0;
//    //输入数据
//    scanf("%d", &n);
//    int m = 0;
//    int arr[51] = { 0 };
//    //初始化数组
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //输入要插入的数字
//    scanf("%d", &m);
//    //处理
//    int j = 0;
//    //从后往前依次与m比较
//    for (i = n; i > 0; i--)
//    {
//        //若m更小时，元素后移一位
//        if (arr[i - 1] > m)
//        {
//            arr[i] = arr[i - 1];
//        }
//        else
//        {
//            //m更大时，将m插入，跳出循环
//            arr[i] = m;
//            break;
//        }
//    }
//    //for循环中不包括i=0的情况，要单独处理
//    if (i == 0)
//    {
//        arr[i] = m;
//    }
//    //输出
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC98-序列中删除指定数字
//int main()
//{
//    int n = 0;
//    //输入数据
//    scanf("%d", &n);
//    int m = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//    //初始化数组
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//    }
//    //输入要删除的数据
//    scanf("%d", &m);
//    //删除数据
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        //要考虑删除多个相同的数字
//        if (arr[i] != m)
//            arr[j++] = arr[i];
//    }
//    //输出删除m后的数组
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC99-序列中整数去重
//int main()
//{
//    int n = 0;
//    int arr[1000] = { 0 };
//    //输入数据
//    scanf("%d", &n);
//    //初始化数组
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //去重    
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            //先找出相同的元素
//            //如果相等，要把后续元素往前移动
//            if (arr[i] == arr[j])
//            {
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;//去重一个，个数少1
//                j--;
//                //把下一个位置的数字arr[j+1]，放在新的arr[j]上
//                //恰好又和arr[i]相同,所以也要再判断
//                //3 2 3 3 3 4 5
//            }
//        }
//    }
//    //输出
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC100-有序序列的合并
//int main() {
//    int n = 0;
//    int m = 0;
//    //输出m和n
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //初始化数组
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    //合并序列+输出
//    int j = 0;
//    i = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n && j < m)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//    return 0;
//}