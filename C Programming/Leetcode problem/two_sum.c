#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{  
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize-1; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d",i,j);
            }        
        }    
    }   
    
}
int main()
{
    int ans = twoSum();
}