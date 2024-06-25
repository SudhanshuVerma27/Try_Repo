#include<stdio.h>

int main()
{
	int n,sum=0;
	printf("Enter a number\n ");
	scanf("%d" , &n);
	while(n)
	{
		int rem;
		rem = n%10;
		sum += rem;
		n = n / 10;
	}
	printf("%d" , sum);
	return 0;
}

