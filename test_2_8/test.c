#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//BC87 - �ɼ�ͳ��
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    float score = 0.0;
//    float sum = 0.0;
//    float avg = 0.0;
//    float max = 0.0;//������߷�Ϊ0
//    float min = 100.0;//������ͷ�Ϊ100
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


//BC89-������֤
//int main()
//{
//    char s1[20] = { 0 };
//    char s2[20] = { 0 };
//    scanf("%s %s", s1, s2);
//    //�ַ����ıȽϺ���ʹ��strcmp����
//    if (strcmp(s1, s2) == 0)
//        printf("same\n");
//    else
//        printf("different\n");
//    return 0;
//}


//BC90-�������
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
//            //�������ͬʱ��������0�������
//            if (tmp > 0)
//            {
//                sum += tmp;
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//BC91-�������
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

//BC93-ͳ��������������
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


//BC94-N����֮��
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


//BC95-��ͷ�����߷�֮��
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

//BC96-���������ж�
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int flag1 = 0;//flag1��ʾ����
//    int flag2 = 0;//flag2��ʾ����
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
//    //flag1 �� flag2 ��Ϊ1�������
//    if (flag1 + flag2 == 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}


//BC97 �������в���һ������
//int main() {
//    int n = 0;
//    //��������
//    scanf("%d", &n);
//    int m = 0;
//    int arr[51] = { 0 };
//    //��ʼ������
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //����Ҫ���������
//    scanf("%d", &m);
//    //����
//    int j = 0;
//    //�Ӻ���ǰ������m�Ƚ�
//    for (i = n; i > 0; i--)
//    {
//        //��m��Сʱ��Ԫ�غ���һλ
//        if (arr[i - 1] > m)
//        {
//            arr[i] = arr[i - 1];
//        }
//        else
//        {
//            //m����ʱ����m���룬����ѭ��
//            arr[i] = m;
//            break;
//        }
//    }
//    //forѭ���в�����i=0�������Ҫ��������
//    if (i == 0)
//    {
//        arr[i] = m;
//    }
//    //���
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC98-������ɾ��ָ������
//int main()
//{
//    int n = 0;
//    //��������
//    scanf("%d", &n);
//    int m = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//    //��ʼ������
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//    }
//    //����Ҫɾ��������
//    scanf("%d", &m);
//    //ɾ������
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        //Ҫ����ɾ�������ͬ������
//        if (arr[i] != m)
//            arr[j++] = arr[i];
//    }
//    //���ɾ��m�������
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC99-����������ȥ��
//int main()
//{
//    int n = 0;
//    int arr[1000] = { 0 };
//    //��������
//    scanf("%d", &n);
//    //��ʼ������
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //ȥ��    
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            //���ҳ���ͬ��Ԫ��
//            //�����ȣ�Ҫ�Ѻ���Ԫ����ǰ�ƶ�
//            if (arr[i] == arr[j])
//            {
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;//ȥ��һ����������1
//                j--;
//                //����һ��λ�õ�����arr[j+1]�������µ�arr[j]��
//                //ǡ���ֺ�arr[i]��ͬ,����ҲҪ���ж�
//                //3 2 3 3 3 4 5
//            }
//        }
//    }
//    //���
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC100-�������еĺϲ�
//int main() {
//    int n = 0;
//    int m = 0;
//    //���m��n
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //��ʼ������
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    //�ϲ�����+���
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