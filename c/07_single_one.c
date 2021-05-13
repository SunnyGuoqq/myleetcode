#include<stdio.h>
#define MAXSIZE 100

/*Given a non-empty array of integers nums,
 * every element appears twice except for one.
 * Find that single one.  */

int main()
{
	int nums[MAXSIZE];
	int number, x;

	/*input data*/
	printf("The program is used to check if there is a single digit!\n");
	printf("Please enter the number of digits: ");
	scanf("%d", &number);
	printf("Please enter the digits(number+1): ");
	for (int i = 0; i <= number; i++)
	{
		scanf("%d", &nums[i]);
	}

	/*XOR*/
	x = nums[0];
	for (int j = 1; j <= number; j++)
	{
		x = x ^ nums[j];
	}
	if (x == 0)
		printf("There is no single digit in the number entered!");
	else 
		printf("A single number is %d", x);
	return 0;
}

