#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//BC130 - С���ֲ�������
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


//BC131-kikiѧ������ƻ���
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}


//BC135-kiki�������ĸ���
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
//        //�ж�i�Ƿ�Ϊ����
//        if (is_prime(i))
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}


//BC136-kikiȥ������������
//����1
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
//    //����
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
//    //ȥ�� �Ƚ�n-1��
//    for (i = 0; i < n - 1; i++)
//    {
//        //��i+1��ߵ�Ԫ����ǰ�ƶ�
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
//    //���
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//����2
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


//BC138-KIKIѧ�ṹ���ָ��
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
    //����һ��������
    struct Node* list = NULL;//ָ�������һ�����
    struct Node* tail = NULL;//ָ���������һ������
    int i = 0;
    //����Ԫ��-β������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        //��̬����һ�����
        struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
        pn->data = data;
        pn->next = NULL;
        //β������
        if (list == NULL)//��
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
    //ɾ��ָ��Ԫ��
    int del = 0;
    scanf("%d", &del);
    struct Node* cur = list;
    struct Node* prev = NULL;
    while (cur)
    {
        if (cur->data == del)
        {
            //ɾ��
            struct Node* pd = cur;
            if (list == cur)//���ɾ�����ǵ�һ�����
            {
                list = cur->next;
                cur = list;
            }
            else//ɾ���Ĳ��ǵ�һ�����
            {
                prev->next = cur->next;
                cur = prev->next;
            }
            n--;
        }
        else
        {
            //�Ҳ���
            prev = cur;
            cur = cur->next;
        }
    }
    printf("%d\n", n);

    //��ӡ����
    cur = list;
    while (cur)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    //�ͷ�����
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
