#include<stdio.h>


int main()
{
	int n ;
	printf("Enter any number : \n");
	scanf("%d" , &n);

	if(n&1)
	{
		printf("Number is Odd\n");
	}
	else{
		printf("Number is even\n");
	}
return 0;
}

