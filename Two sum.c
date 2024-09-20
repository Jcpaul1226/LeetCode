#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int temp1=0, temp2=0;
    int *arr = (int *)malloc(2*sizeof(int));        //malloc returns a generic void pointer and must be typcasted
    for(int i = 0; i <= numsSize; i++)              
    {
        for(int j = i+ 1; j<= numsSize - 1; j++)    //nested for loop to add all possible combinations
        {
            if(nums[i]+nums[j] == target)           //if a sum equals the target return the array
            {
                arr[0]=i;
                arr[1]=j;
                *returnSize = 2;                    //must return size of result array
                return arr;
            }
        }
    }
    returnSize=0;
    return NULL;
}

/*                  Notes                       
brush up on Memory management using malloc and free, requirements and syntax
brush up on pointers and the scope of variables

*/