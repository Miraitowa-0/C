#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//BC130 - 小乐乐查找数字
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int x = 0;
//    scanf("%d", &x);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//BC131-kiki学程序设计基础
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}


//BC135-kiki求质数的个数
//int is_prime(int n)
//{
//    int i = 0;
//    for (i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 999; i++)
//    {
//        //判断i是否为质数
//        if (is_prime(i))
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}


//BC136-kiki去重整数并排序
//方法1
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //排序
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    //去重 比较n-1对
//    for (i = 0; i < n - 1; i++)
//    {
//        //把i+1后边的元素往前移动
//        if (arr[i] == arr[i + 1])
//        {
//            int k = 0;
//            for (k = i; k < n - 1; k++)
//            {
//                arr[k] = arr[k + 1];
//            }
//            n--;
//            i--;
//        }
//    }
//    //输出
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//方法2
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1001] = { 0 };
//    int m = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        arr[m] = m;
//    }
//    for (i = 0; i < 1001; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}


//BC138-KIKI学结构体和指针
struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    int n = 0;
    scanf("%d", &n);
    int data = 0;
    //创建一个空链表
    struct Node* list = NULL;//指向链表第一个结点
    struct Node* tail = NULL;//指向链表最后一个结点的
    int i = 0;
    //插入元素-尾部插入
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        //动态申请一个结点
        struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
        pn->data = data;
        pn->next = NULL;
        //尾部插入
        if (list == NULL)//空
        {
            list = pn;
            tail = pn;
        }
        else
        {
            tail->next = pn;
            tail = tail->next;
        }
    }
    //删除指定元素
    int del = 0;
    scanf("%d", &del);
    struct Node* cur = list;
    struct Node* prev = NULL;
    while (cur)
    {
        if (cur->data == del)
        {
            //删除
            struct Node* pd = cur;
            if (list == cur)//如果删除的是第一个结点
            {
                list = cur->next;
                cur = list;
            }
            else//删除的不是第一个结点
            {
                prev->next = cur->next;
                cur = prev->next;
            }
            n--;
        }
        else
        {
            //找不到
            prev = cur;
            cur = cur->next;
        }
    }
    printf("%d\n", n);

    //打印链表
    cur = list;
    while (cur)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    //释放链表
    cur = list;
    while (cur)
    {
        struct Node* pd = cur;
        cur = cur->next;
        free(pd);
    }
    list = NULL;

    return 0;
}
