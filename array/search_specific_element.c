
#include<stdio.h>

int main()
{
	int arr[10] , k;
	for(int i=0 ; i<10 ; i++)
	{
		scanf("%d" , &arr[i]);
	}


	printf("Enter element\n");
	scanf("%d" , &k);
	for(int i=0 ; i<10 ; i++)
	{
		if(arr[i] == k)
		{
			printf("Found at index %d" , i);
		}
	}
	return 0;
}
