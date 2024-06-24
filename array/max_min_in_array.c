#include<stdio.h>

int main()
{
	int arr[10] , max , min;
	for(int i=0 ; i<10 ; i++)
	{
		scanf("%d" , &arr[i]);
	}

	
 	max = arr[0];
	min = arr[0];

	for(int i=0 ; i<10 ; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	 for(int i=0 ; i<10 ; i++)
        {
                if(min >  arr[i])
                {
                        min = arr[i];
                }
        }

	 printf("max : %d\n min %d\n ", max , min );
	return 0;
}	

