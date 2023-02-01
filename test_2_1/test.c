#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//BC6 - 小飞机
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}


//BC8-十六进制转十进制
//int main() 
//{
//    printf("%15d", 0XABCDEF);
//    return 0;
//}


//BC9-printf函数的返回值
//代码1
//int main()
//{
//	int ret = 0;
//	ret = printf("Hello world!");
//	printf("\n");
//	printf("%d", ret);
//	return 0;
//}

//代码2
//int main()
//{
//	printf("\n%d", printf("Hello world!"));
//	return 0;
//}

//代码3
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//BC11-学生基本信息输入输出
//int main()
//{
//	int num = 0;
//	float c_score = 0.0;
//	float math_score = 0.0;
//	float eng_score = 0.0;
//	scanf("%d;%f,%f,%f", &num, &c_score, &math_score, &eng_score);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",
//	num, c_score, math_score, eng_score);
//	return 0;
//}



//BC35-判断字母
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        //判断是否为字母
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        //清理\n
//        getchar();
//    }
//    return 0;
//}


//BC12-字符金字塔
//int main()
//{
//    char n = 0;
//    scanf("%c", &n);
//    int i = 0;
//    int j = 0;
//    //打印5行
//    for (i = 0; i < 5; i++)
//    {
//        //每一行的打印
//        //打印空格
//        for (j = 0; j < 5 - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        //打印1    
//        for (j = 0; j <= i; j++)
//        {
//            printf("%c ", n);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC13-ASCII码
//int main()
//{
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    //计算数组的元素个数
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    //循环遍历输出每一个元素
//    for (i = 0; i < sz; i++)
//    {
//        //%c 控制打印字符
//        printf("%c", arr[i]);//每个字母不要隔开
//    }
//    return 0;
//}


//BC14-出生日期输入输出
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int d = 0;
//    scanf("%4d%2d%2d", &y, &m, &d);
//    printf("year=%d\n", y);
//    printf("month=%02d\n", m);//输出不够2位时，左边拿0填充
//    printf("date=%02d", d);
//    return 0;
//}


//BC29-2的n次方计算
//int main()
//{
//    int n = 0;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        printf("%d\n", 1 << n);
//    }
//    return 0;
//}