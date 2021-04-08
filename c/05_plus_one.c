//author: Qingqing Guo, sunnyguoqq@outlook

#include<stdio.h>
#define MAXSIZE 100

/*Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer. reinserted in order.  */

int main()
{
	int digits[MAXSIZE];
	int len;

	/*input data*/
	printf("len=");
	scanf_s("%d", &len);
	printf("digits[len+1]=");
	for (int i = 0; i <= len; i++)
	{
		scanf_s("%d", &digits[i]);
	}

	/*add and display*/
	digits[len] += 1;
	for (int i = 0; i <= len; i++) {
		printf("%d ", digits[i]);
	}
	return 0;
}

