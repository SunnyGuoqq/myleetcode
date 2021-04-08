//author: Qingqing Guo, sunnyguoqq@outlook

#include<stdio.h>

/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.  */

int main()
{
	int nums[MAXSIZE];
	int len, x;

	/*input data*/
	printf("len=");
	scanf_s("%d", &len);
	printf("nums[len+1]=");
	for (int i = 0; i <= len; i++)
	{
		scanf_s("%d", &nums[i]);
	}

	/*XOR*/
	x = nums[0];
	for (int j = 1; j <= len; j++)
	{
		x = x ^ nums[j];
	}
	printf("%d",x);
	return 0;
}

