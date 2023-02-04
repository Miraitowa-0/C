#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>

//BC40-竞选社长
//代码1
//int main()
//{
//    //输入
//    char arr[100] = { 0 };
//    gets_s(arr,100);
//    //统计
//    int count_a = 0;
//    int count_b = 0;
//    int i = 0;
//    while (arr[i] != '0' && arr[i] != EOF)
//    {
//        if (arr[i] == 'A')
//        {
//            count_a++;
//        }
//        else if (arr[i] == 'B')
//        {
//            count_b++;
//        }
//        i++;
//    }
//    //输出
//    if (count_a > count_b)
//    {
//        printf("A\n");
//    }
//    else if (count_a < count_b)
//    {
//        printf("B\n");
//    }
//    else {
//        printf("E\n");
//    }
//    return 0;
//}


//代码2
//int main()
//{
//    char arr[100] = { 0 };
//    gets_s(arr,100);
//    int flag = 0;
//    int i = 0;
//    while (arr[i] != '0' && arr[i] != EOF)
//    {
//        if (arr[i] == 'A')
//        {
//            flag++;
//        }
//        else if (arr[i] == 'B')
//        {
//            flag--;
//        }
//        i++;
//    }
//    if (flag > 0)
//    {
//        printf("A\n");
//    }
//    else if (flag < 0)
//    {
//        printf("B\n");
//    }
//    else {
//        printf("E\n");
//    }
//
//    return 0;
//}

//代码3
//int main()
//{
//	char ch = 0;
//	int flag = 0;
//	while (((ch = getchar()) != '0') && ch != EOF)
//	{
//		if (ch == 'A')
//		{
//			flag++;
//		}
//		else if (ch == 'B')
//		{
//			flag--;
//		}
//	}
//	if (flag > 0)
//	{
//		printf("A\n");
//	}
//	else if (flag < 0)
//	{
//		printf("B\n");
//	}
//	else
//	{
//		printf("E\n");
//	}
//	return 0;
//}




//BC41 - 你是天才吗？
//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) != EOF)
//    {
//        if (num >= 140)
//        {
//            printf("Genius\n");
//        }
//    }
//    return 0;
//}


//BC42-完美成绩
//int main()
//{
//    int score = 0;
//    //这种写法是因为scanf读取失败返回EOF,EOF是-1，所以按位取反后的结果是0,0为假，可以让循环停止。
//    while (~scanf("%d", &score))
//    {
//        if (score >= 90 && score <= 100)
//        {
//            printf("Perfect\n");
//        }
//    }
//    return 0;
//}



//BC43-及格分数
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 60)
//        {
//            printf("Pass\n");
//        }
//        else {
//            printf("Fail\n");
//        }
//    }
//    return 0;
//}


//BC44-判断整数的奇偶性
//int main()
//{
//    int num = 0;
//    while (~scanf("%d", &num))
//    {
//        if (num % 2 == 1)
//        {
//            printf("Odd\n");
//        }
//        else
//        {
//            printf("Even\n");
//        }
//    }
//    return 0;
//}

//BC45-最高分数
//代码1
//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    int n3 = 0;
//    scanf("%d %d %d", &n1, &n2, &n3);
//    int max = n1 > n2 ? n1 : n2;
//    max = max > n3 ? max : n3;
//    printf("%d\n", max);
//    return 0;
//}

//代码2
//int main()
//{
//    int score[3] = { 0 };
//    while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
//    {
//        int max = score[0];
//        int i = 0;
//        for (i = 1; i < 3; i++)
//        {
//            if (score[i] > max)
//            {
//                max = score[i];
//            }
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}


//BC46-判断元音还是辅音
//代码1
//int main()
//{
//    int ch = 0;
//    char vowel[10] = "AEIOUaeiou";
//    while ((ch = getchar()) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == vowel[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//        getchar();//去除每个字符后的\n
//    }
//    return 0;
//}

//代码2
//int main()
//{
//    int ch = 0;
//    char vowel[10] = "AEIOUaeiou";
//    //在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
//    while (scanf(" %c", &ch) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == vowel[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//    }
//
//    return 0;
//}


//代码3
//int main()
//{
//    int ch = 0;
//    char vowel[10] = "AEIOUaeiou";
//    //在%c的后边写一个'\n'，其实在输入时候就会消化掉这个\n字符，不会为下次留下空白字符的隐患
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == vowel[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}


//BC47-判断是不是字母
//代码1
//int main()
//{
//    int ch = 0;
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//    return 0;
//}

//代码2
//int main()
//{
//    int ch = 0;
//    while (~(ch = getchar()))
//    {
//        if (isalpha(ch))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        getchar();
//    }
//    return 0;
//}


//BC48-字母的大小写转换
//代码1
//int main()
//{
//    int ch = 0;
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c\n", ch + 32);
//        }
//        else if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);
//        }
//    }
//    return 0;
//}

//代码2
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isupper(ch))
//        {
//            printf("%c\n", tolower(ch));
//        }
//        else if(islower(ch))
//        {
//            printf("%c\n", toupper(ch));
//        }
//        getchar();
//    }
//    return 0;
//}