#include<stdio.h>
#include<string.h>
void merge_s(int a[] , int b[])
{
	int c[20];int j,k;
	for(int i=0 ; i<20 ; i++)
	{
		j=0;
		k=0;
		while(j<10 || k< 10)
		{
			if(a[j] <=  b[k])
			{
				c[i] = a[j];
				j++;
				i++;
			}
			else if(a[j] > b[k])
                        {
                                c[i] = b[k];
                                k++;
				i++;
                        }
			if(j==10)
			{
				while(k<10)
				{
					c[i] = b[k];
					i++;
					k++;
				}
			}
			else if(k == 10)
			{
				while(j<10)
				{
					c[i] = a[j];
					i++;
					j++;
				}
			}
		}
	}
	for(int i=0 ; i<20 ; i++)
	{
		printf("%d" , c[i]);
	}
}





int main()
{
	int a1[10],a2[10],r[20];

	printf("Enter array1 :\n");
	for(int i=0 ; i<10; i++)
	{
		scanf("%d" , &a1[i]);
	}
	printf("Enter array2 :\n");
        for(int i=0 ; i<10; i++)
        {
                scanf("%d" , &a2[i]);
        }

	merge_s(a1 , a2);
	return 0;
}

