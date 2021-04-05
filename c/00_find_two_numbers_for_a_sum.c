//author: Qingqing Guo, sunnyguoqq@outlook.com
//iteration

#include <stdio.h>

/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. */

int main()
{
	int nums[100];//an array
	int target;
	int len;//length of array

	printf("target=");
	scanf("%d", &target);
	printf("length of nums:");
	scanf("%d", &len);
	printf("nums[len+1]=");

	/*input data*/
	for(int i=0; i<=len; i++){
		scanf("%d", &nums[i]);
 	}	
	
	/*find index*/
	for(int i = 0; i < len; i++){
		for(int j = i; j <= len; j++){
			if(nums[i] == target-nums[j]){
				printf("[%d,%d]",i, j);
			}
		}
	}
	return 0;
}
