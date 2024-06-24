
#include<stdio.h>


int main()
{
	float a;
	printf("Enter Weight\n  " );
	scanf("%f" , &a);

	if(a<18.5)
	{
		printf("underweight\n");
	}
	else if(a>=18.5 && a<24.9 )
	{
		printf("Normal Weight\n");
	}
	else if(a>=25 && a<29.9)
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obesity ");
	}

	return 0;
}
