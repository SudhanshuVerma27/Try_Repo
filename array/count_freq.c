#include<stdio.h>

int main()
{
	int i,j;
	int arr[10] , arr2[10];

	for(i=0 ; i<10 ; i++)
		{
			scanf("%d" , &arr[i]);
			arr2[i] = -1;
		}
	for(i = 0 ; i<10 ; i++)
	{	int count = 1;
		for(j = i+1 ; j<10 ; j++)
		{
			if(arr[i] == arr[j])
			{
				arr2[j] = 0;
				count++;
			}
		}
		if(arr2[i] != 0)
		{
			arr2[i] = count;
		}
	}

	for(i = 0 ;i<10 ; i++)
	{
		if(arr2[i] != 0 )
		{
			printf("%d %d\n" , arr[i] , arr2[i]);
		}
	}
	return 0;
}

