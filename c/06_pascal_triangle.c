//author: Qingqing Guo, sunnyguoqq@outlook

#include<stdio.h>
#define MAXSIZE 100

/*Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.  */

int main()
{
	int n;
	int a[MAXSIZE][MAXSIZE];
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	/*display*/
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

