#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//BC6 - С�ɻ�
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


//BC8-ʮ������תʮ����
//int main() 
//{
//    printf("%15d", 0XABCDEF);
//    return 0;
//}


//BC9-printf�����ķ���ֵ
//����1
//int main()
//{
//	int ret = 0;
//	ret = printf("Hello world!");
//	printf("\n");
//	printf("%d", ret);
//	return 0;
//}

//����2
//int main()
//{
//	printf("\n%d", printf("Hello world!"));
//	return 0;
//}

//����3
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//BC11-ѧ��������Ϣ�������
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



//BC35-�ж���ĸ
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        //�ж��Ƿ�Ϊ��ĸ
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        //����\n
//        getchar();
//    }
//    return 0;
//}


//BC12-�ַ�������
//int main()
//{
//    char n = 0;
//    scanf("%c", &n);
//    int i = 0;
//    int j = 0;
//    //��ӡ5��
//    for (i = 0; i < 5; i++)
//    {
//        //ÿһ�еĴ�ӡ
//        //��ӡ�ո�
//        for (j = 0; j < 5 - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        //��ӡ1    
//        for (j = 0; j <= i; j++)
//        {
//            printf("%c ", n);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//BC13-ASCII��
//int main()
//{
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    //���������Ԫ�ظ���
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    //ѭ���������ÿһ��Ԫ��
//    for (i = 0; i < sz; i++)
//    {
//        //%c ���ƴ�ӡ�ַ�
//        printf("%c", arr[i]);//ÿ����ĸ��Ҫ����
//    }
//    return 0;
//}


//BC14-���������������
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int d = 0;
//    scanf("%4d%2d%2d", &y, &m, &d);
//    printf("year=%d\n", y);
//    printf("month=%02d\n", m);//�������2λʱ�������0���
//    printf("date=%02d", d);
//    return 0;
//}


//BC29-2��n�η�����
//int main()
//{
//    int n = 0;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        printf("%d\n", 1 << n);
//    }
//    return 0;
//}