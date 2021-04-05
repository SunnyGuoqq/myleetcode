//author: Qingqing Guo, sunnyguoqq@outlook.com
//sort and double pointer

#include<stdio.h>

/*Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.*/

int main()
{
	int nums[100];//maxsize = 100
	int len, j, k;
	int temp = 0;//a temporary variable when sorting

	printf("len=");
	scanf("%d", &len);
	printf("nums[len+1]");

	/*input data*/
	for (int i = 0; i <= len; i++)
	{
		scanf("%d", &nums[i]);
	}

	/*sort*/
	for(int a = 0; a <= len; a++)
	{
		for(int i = 0; i <= len-1-a; i++)
		{
			if(nums[i] > nums[i+1])
			{
				temp = nums[i];
				nums[i] = nums[ i+1];
				nums[i+1] = temp;
			}
		}
	}

	/*double pointer*/
	for( int i = 0; i <= len; i++)
	{
		if(nums[i]>0)//after sorting, the smallest less than zero
			break;
		if(i >= 1 && nums[i] == nums[i-1])//avoid repeated data
			continue;
		j = i + 1;
		k = len;
		while(j < k )
		{
			if(nums[j] + nums[k] == -nums[i])
			{
				printf("[%d,%d,%d]\n", nums[i],nums[j],nums[k]);
				while( j < k && nums[j] == nums[j+1])//avoid repeated data
					j += 1;
				while( j < k && nums[k] ==nums[k-1])
					k -= 1;
				j += 1;
				k -= 1;
			}
			else if(nums[j] + nums[k] < -nums[i])
				j += 1;
			else
				k -= 1;//nums[k] is too big
		}
	}
	return 0;
}

