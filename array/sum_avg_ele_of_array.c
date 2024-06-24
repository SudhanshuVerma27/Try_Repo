#include<stdio.h>

int main()
{
	int arr[10] , avg , sum=0 ;
	for(int i = 0 ; i < 10 ; i++ )
	{
		scanf("%d" , &arr[i]);
	}
	for(int i=0 ; i<10 ; i++)
	{
		sum = sum + arr[i];
	}
	avg = sum / 10;
	printf("Sum : %d\t Average : %d\n" , sum , avg);
	return 0;
}
