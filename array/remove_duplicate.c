#include<stdio.h>

int main()
{
	int arr[10] , i ,size = 10;
	for(i=0 ; i<10 ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i<size ; i++)
	{
		for(int j=i+1 ; j<size  ; j++)
		{
			if(arr[i] == arr[j])
			{
				for(int k = j ; k <size-1 ; k++)
				{
					arr[k] = arr[k+1];
				}
				size--;
				j--;
			}
		}
	}

	for(i=0 ; i<size ; i++)
	{
		printf("%d\n" , arr[i]);
	}
	return 0;
}

