#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//17.04. ��ʧ������
//int missingNumber(int* nums, int numsSize)
//{
//    //�������������ƣ� ��ͬΪ0 ��ͬΪ1 ���������㽻����
//    int x = 0;
//    int i = 0;
//    int j = 0;
//    //����0�������������򣬵õ������ÿ��Ԫ��
//    for (i = 0; i < numsSize; i++)
//    {
//        x ^= nums[i];
//    }
//    //�������ÿ��Ԫ�غ�����+1��Ԫ�����
//    //�����Ϊ0��Ԫ�ؾ�����ʧ������
//    for (j = 0; j < numsSize + 1; j++)
//    {
//        x ^= j;
//    }
//    return x;
//}
//int main()
//{
//    int nums[9] = { 9,6,4,2,3,5,7,0,1 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int ret = missingNumber(&nums, numsSize);
//    printf("%d\n", ret);
//	return 0;
//}


//189. ��ת����
//Reverse()���ú���
//void Reverse(int* nums, int left, int right)
//{
//    while (left < right)
//    {
//        int tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}
//void rotate(int* nums, int numsSize, int k)
//{
//    if (k > numsSize)
//    {
//        k %= numsSize;
//    }
//    //��k��Ԫ������
//    Reverse(nums, numsSize - k, numsSize - 1);
//    //ǰ0��N-k��Ԫ������
//    Reverse(nums, 0, numsSize - k - 1);
//    //��������
//    Reverse(nums, 0, numsSize - 1);
//}
//int main()
//{
//    int nums[7] = { 1,2,3,4,5,6,7 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int k = 3;
//    rotate(&nums, numsSize, k);
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//	return 0;
//}