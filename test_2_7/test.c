#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//BC72-平均身高
//int main()
//{
//    float h = 0.0;
//    float sum = 0.0;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &h);
//        sum += h;
//    }
//    printf("%.2f\n", sum / 5.0);
//    return 0;
//}

//BC73-挂科危险
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score >= 10)
//        printf("Danger++\n");
//    else if (score >= 4 && score <= 9)
//        printf("Danger\n");
//    else if (score >= 0 && score <= 3)
//        printf("Good\n");
//    return 0;
//}
 
 
 
//BC74-HTTP状态码
//int main()
//{
//    int state = 0;
//    while (scanf("%d", &state) != EOF)
//    {
//        switch (state)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}



//BC75-数字三角形
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //打印行数
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            //打印一行的内容
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC76-公务员面试
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int max = 0;//假设最大值是0
//    int min = 100;//假设最小值是100
//    int count = 0;//计数器
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//        sum += score;
//        count++;
//        if (count == 7)
//        {
//            printf("%.2f\n", (sum - max - min) / 5.0);
//            //重置计数器 最大值 最小值 总成绩
//            count = 0;
//            max = 0;
//            min = 100;
//            sum = 0;
//        }
//    }
//    return 0;
//}


//BC77-有序序列插入一个数
//int main()
//{
//    int n = 0;
//    int arr[51] = { 0 };
//    int m = 0;//要插入的数据
//    //输入数据
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    //处理插入数据
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > m)
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//        if (i == 0)
//        {
//            arr[0] = m;
//        }
//    }
//    //从后往前比较数字，找到合适的位置，就可以插入数字了，
//    //但是如果插入的数字比所有的元素都小，那就插入到第一个位置上
//    //输出数据
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//BC78-筛选法求素数
//筛选法
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int arr[101];
//        //初始化数组内容
//        int i = 0;
//        for (i = 2; i <= n; i++)
//        {
//            arr[i] = i;
//        }
//        //筛选        
//        int j = 0;//j为除数
//        for (j = 2; j <= n; j++)
//        {
//            int k = 0;//k为被除数
//            for (k = j + 1; k <= n; k++)
//            {
//                if (arr[k] % j == 0)
//                    arr[k] = 0;
//            }
//        }
//        //输出并记录
//        int count = 0;
//        for (i = 2; i <= n; i++)
//        {
//            if (arr[i] != 0)
//                printf("%d ", arr[i]);
//            else
//                count++;
//        }
//        printf("\n%d\n", count);
//    }
//
//    return 0;
//}



//相当于打印n以内的素数
//试除法
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;//不是素数返回0
//	}
//	return 1;//是素数返回1
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		
//		int i = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (is_prime(i) == 1)
//			{
//				printf("%d ", i);
//			}
//			else
//			{
//				count++;
//			}		
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}



//BC79-图像相似度
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int count = 0;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    //输入几行几列
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    //创建n行n列的二维数组
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //在二维数组中求相同元素的个数
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//        }
//    }
//    //输出相似度
//    printf("%.2f\n", 100.0 * count / (m * n));
//    return 0;
//}


//BC80-验证登录
//int main()
//{
//    char name[20] = { 0 };
//    char password[20] = { 0 };
//    while (scanf("%s %s", &name, &password) != EOF)
//    {
//        // 两个字符串比较大小不能使用==，得使用strcmp函数，
//        //比较的是两个字符 串中对应字符的ASCII码值
//        if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0)
//            printf("Login Success!\n");
//        else
//            printf("Login Fail!\n");
//    }
//    return 0;
//}



//BC85-包含数字9的数
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        //判断i是否包含9
//        //要判断一个数字是否包含9，就看一下这个数字的某一位是否为9即可，
//        //只要某一位为9就停下来。
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            m = m / 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//BC86-奇偶统计
//代码1
//int main()
//{
//    int n = 0;
//    int odd = 0;//奇数的个数
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 1)
//            odd++;
//    }
//    printf("%d %d\n", odd, n - odd);
//    return 0;
//}


//代码2
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//如果n是偶数，则奇数和偶数一样多，都是n/2
//	//如果n是奇数，则奇数比偶数多1，奇数是 n/2 + 1  偶数是 n/2
//	if (n % 2 == 1)
//		printf("%d %d\n", n / 2 + 1, n / 2);
//	else
//		printf("%d %d\n", n / 2, n / 2);
//	return 0;
//}