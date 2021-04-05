#include<stdio.h>

int main()
{
	int x;
	int a, b, c;

	printf("x=");
	scanf("%d", &x);
	a = x%10;
	b = (x/10)%10;
	c = x/100;
	printf("%d", a*100+b*10+c);
	return 0;
}
