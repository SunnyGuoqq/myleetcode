//author: Qingqing Guo, sunnyguoqq@outlook

#include<stdio.h>

/*Given an array nums and a value val, remove all instances of that value in-place and return the new 
length.*/

int main()
{
	int nums[100],nums_f[100];//maxsize = 100
	int val, len;
	int flag = 0;//Number of records

	printf("len=");//length of array
	scanf("%d", &len);
	printf("val=");//delete
	scanf("%d", &val);

	/*input data*/
	printf("nums(len+1)=");
	for (int i = 0; i <= len; i++)
	{
		scanf("%d", &nums[i]);
	}

	/*delete data*/
	for (int i = 0; i <= len; i++)
	{
		if (nums[i] != val)
		{
			nums_f[i] = nums[i];
			flag += 1;
		}
	}
	printf("%d\n", flag);

	/*output data*/
	for (int i = 0; i < flag; i++)
	{
		printf("%d ", nums_f[i]);
	}
	return 0;
}
