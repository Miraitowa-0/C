#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//BC50-计算单位阶跃函数
//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("%d\n", 1);
//        else if (t == 0)
//            printf("%.1lf\n", 0.5);
//        else
//            printf("%d\n", 0);
//    }
//    return 0;
//}

//BC51-三角形判断
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (~scanf("%d %d %d", &a, &b, &c))
//    {
//        //能构成三角形
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            //等边三角形
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            //等腰三角形
//            else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}


//BC52-衡量人体胖瘦程度
//int main()
//{
//	float weight = 0.0;
//	float hight = 0.0;
//	while (scanf("%f %f", &weight, &hight) != EOF)
//	{
//		float bmi = weight / (hight * hight / 100 / 100);
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 && bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi > 23.9 && bmi <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else {
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}



//BC53-计算一元二次方程
//int main()
//{
//    float a = 0.0;
//    float b = 0.0;
//    float c = 0.0;
//    while (~scanf("%f %f %f", &a, &b, &c))
//    {
//        if (a != 0)
//        {
//            float disc = b * b - 4 * a * c;
//            if (disc == 0)
//            {
//                if (b == 0)
//                {
//                    printf("x1=x2=%.2f\n", b);
//                }
//                else
//                {
//                    printf("x1=x2=%.2f\n", (-b + sqrtf(disc)) / (2 * a));
//                }
//            }
//            else if (disc > 0)
//            {
//                printf("x1=%.2f;x2=%.2f\n",
//                    (-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
//            }
//            else
//            {
//                float real = -b / (2 * a);
//                float image = sqrt(-disc) / (2 * a);
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
//                    real, image, real, image);
//            }
//        }
//        else
//        {
//            printf("Not quadratic equation\n");
//        }
//    }
//    return 0;
//}


//BC54-获得月份天数
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        int day = days[month - 1];
//        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//        {
//            if (month == 2)
//            {
//                day += 1;
//            }
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}


//BC55-简单计算器
//int main()
//{
//    double n1 = 0.0;
//    double n2 = 0.0;
//    char op = 0;
//    while (scanf("%lf%c%lf", &n1, &op, &n2) != EOF)
//    {
//        switch (op)
//        {
//        case '+':
//            printf("%.4lf+%.4lf=%.4lf", n1, n2, n1 + n2);
//            break;
//        case '-':
//            printf("%.4lf-%.4lf=%.4lf", n1, n2, n1 - n2);
//            break;
//        case '*':
//            printf("%.4lf*%.4lf=%.4lf", n1, n2, n1 * n2);
//            break;
//        case '/':
//            if (n2 == 0.0)
//                printf("Wrong!Division by zero!\n");
//            else
//                printf("%.4lf/%.4lf=%.4lf", n1, n2, n1 / n2);
//            break;
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}


//BC56-线段图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC57-正方形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        //打印n行
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //每一行打印几个*
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//BC58-直角三角形图案
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        //控制行数
        for (i = 0; i < n; i++)
        {
            int j = 0;
            //每一行
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}