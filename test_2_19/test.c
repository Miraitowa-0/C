#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//17.04. 消失的数字
//int missingNumber(int* nums, int numsSize)
//{
//    //异或操作（二进制） 相同为0 不同为1 异或操作满足交换律
//    int x = 0;
//    int i = 0;
//    int j = 0;
//    //先用0和输入的数组异或，得到数组的每个元素
//    for (i = 0; i < numsSize; i++)
//    {
//        x ^= nums[i];
//    }
//    //用数组的每个元素和数组+1个元素异或
//    //结果不为0的元素就是消失的数字
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


//189. 轮转数组
//Reverse()逆置函数
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
//    //后k个元素逆置
//    Reverse(nums, numsSize - k, numsSize - 1);
//    //前0到N-k个元素逆置
//    Reverse(nums, 0, numsSize - k - 1);
//    //整体逆置
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