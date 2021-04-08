//author: Qingqing Guo, sunnyguoqq@outlook

#include<stdio.h>

/*Given a 32-bit signed integer, reverse digits of an integer. */

int main()
{
	int x;
	int temp = 0;
	int res = 0;

	/*input*/
	printf("x=");
	scanf("%d", &x);

	/*revert*/
	if (x < 0)
	{
		x = -x;
		while (x != 0)
		{
			temp = x % 10;
			temp = -temp;
			res = res * 10 + temp;
			x /= 10;
		}
		printf("%d", res);
	}
	else
	{
		while (x != 0)
		{
			temp = x % 10;
			res = res * 10 + temp;
			x /= 10;
		}
		printf("%d", res);
	}

	return 0;
}
