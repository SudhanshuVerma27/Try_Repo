#include<stdio.h>
#include<math.h>

int main()
{
	int n,l,u,sqrt_n;
	printf("Enter a number :");
	scanf("%d" , &n);
	sqrt_n = (int)sqrt(n);

	l = sqrt_n-1;
	u = sqrt_n+1;

	int ls = l * l;
	int us = u*u;

	if(sqrt_n * sqrt_n == n)
	{
		printf("%d" , n);
	}
	else
	{
		if(floor(ls - n) <= floor(us - n))
		{
			printf("%d" , ls*ls);
		}
		else
		{
			printf("%d" , us*us);
		}
	}
	return 0;
}
	



