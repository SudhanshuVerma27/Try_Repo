#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter 3 numbers \n");
	scanf("%d%d%d" , &a , &b , &c);

	max = a;
	if(max < b)
	{
		max = b;
	}
	
	if(max < c)
	{
		max = c;
	}

	printf("Largest number is %d\n " , max);

	return 0;
}
