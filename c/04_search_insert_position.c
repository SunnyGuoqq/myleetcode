//author: Qingqing Guo, sunnyguoqq@outlook

#include<stdio.h>
#define MAXSIZE 100

/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.  */

int main()
{
	int nums[MAXSIZE];
	int len, target;
	int temp;
	int left = 0;
	int right = 0;
	int mid = 0;

	/*input data*/
	printf("len=");
	scanf_s("%d", &len);
	printf("target=");
	scanf_s("%d", &target);
	printf("nums=");
	for (int i = 0; i <= len; i++)
	{
		scanf_s("%d", &nums[i]);
	}

	/*sorting*/
	for (int i = 0; i <= len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	/*find and insert position*/
	if (nums[len] < target)
	{
		printf("%d", len + 1);
	}
	else
		right = len;
		while (left < right)
		{
			mid = left + (right - left) / 2;
			if (nums[mid] == target)
			{
				printf("%d", mid);
				break;
			}
			else if (nums[mid] < target)
			{
				left = mid + 1;
				printf("%d", left);
			}
			else if (nums[mid] > target&&target>nums[mid-1])
			{
				printf("%d", mid);
				break;
			}
			else if (nums[left] >= target)
			{
				printf("%d", left);
				break;
			}
		}
	return 0;
}

