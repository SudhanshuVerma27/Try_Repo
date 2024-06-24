#include<stdio.h>

int main()
{
	int arr[10] ,arr2[10] , r[20] , k  ;
       for(int i=0 ; i<10 ; i++)
       {
	scanf("%d" , &arr[i]);
       }
	for(int i=0 ; i<10 ; i++)
	{
	scanf("%d" , &arr2[i]);
	}
	for(int i=0 ; i<10 ; i++)
	{
		r[i] = arr[i];
	}
	int i,j;
	for(i=0,j = 10 ; i<10 && j<20  ; i++ , j++)
	{
		r[j] = arr2[i];


	}
	for(int i=0 ; i<20 ; i++)
	{
		printf("%d" , r[i]);
	}
	return 0;
}
