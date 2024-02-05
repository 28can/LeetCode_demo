#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *a = (int *)malloc(2*sizeof(int));
	for (int i = 0; i < numsSize-1; i++)
	{
		for (int j = i+1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
                 *returnSize = 2;
				return a;
			}
		}
	}
    *returnSize = 0;
	return 0;
}
int main(){
	int nums[5]={1,2,3,4,5};
	int returnSize = 2;
	int *c= &returnSize, *d;
	int numsSize = 5, target = 7;
	d = twoSum(nums, numsSize, target, c);
	printf("[%d,%d]", d[0], d[1]);
	return 0;
}




