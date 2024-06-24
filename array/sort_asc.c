#include<stdio.h>

int main()
{
int arr[10] , min ;

for(int i = 0 ; i<10 ; i++)
	{
		scanf("%d" , &arr[i]);
	}

for(int i=0;i<9;i++)
	{
		min = arr[i];
		for(int k = i+1 ; k<10 ; k++)
			{
				if(arr[i] >  arr[k])
				{
				int temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
				}
	     		}
	}
	for(int i=0 ; i<10 ; i++)
	{
	printf("%d" , arr[i]);
	    }
		return 0;
}


			
