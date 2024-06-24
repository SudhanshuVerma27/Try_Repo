#include<stdio.h>

int main()
{
	int a;
	printf("Enter Temp :\n");
	scanf("%d" , &a);

	if(a > 30)
	{
		printf("It's hot outside, stay hydrated!\n");
	}
	else if(a>=20 && a<30)
	{
		printf("The weather is nice and warm.\n");
	}
	else if(a>10 && a<20)
	{
		printf("It's a bit chilly, wear a jacket.\n");
	}
	else
	{
		printf("It's cold outside, stay warm!\n");
	}
	return 0;
}
