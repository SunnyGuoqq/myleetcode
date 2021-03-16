#include<stdio.h>

int main()
{
	int nums[3], val;
	int a[100], b=0;

	printf("valval=");
	scanf("%d", &val);
	printf("nums[i]=");
	for(int i=0; i<=3; i++)
	{
		scanf("%d", &nums[i]);
	}

	for(int j=0,flag=0; j<=3,flag<=3;j++,flag++)
	{
		if(nums[j] != val)
		{
			a[flag]=nums[j];
			b++;
			printf("[%d]", a[flag]);
		}
	}
	printf("%d", b);
	return 0;
}
