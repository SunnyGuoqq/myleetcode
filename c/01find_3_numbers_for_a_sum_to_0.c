#include<stdio.h>

int main()
{
	int a=0, b, c;
	int nums[5];
	for(int i=0; i<5; i++)
	{
		scanf("%d", &nums[i];
	}

	for(a=0; a<5; a++)
	{
		for(b=a+1; b<5-a; b++)
		{
			for(c=b+1; c<4-a; c++)
			{
				if(nums[a] ==0 - nums[b] - nums[c])
				{
					printf("%d %d %d", nums[a], nums[b], nums[c];
				}	
			
			}
		}
	}
	return 0;
}
