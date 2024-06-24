#include<stdio.h>
int main()
{
	float t,r;
	printf("Enter temperature in Celcius :\n");
	scanf("%f" , &t);

	r = t * (9/5) + 32;

	printf("Temperature in fehranheit : %f\n" , r);

	return 0;
}
