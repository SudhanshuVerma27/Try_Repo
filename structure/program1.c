#include<stdio.h>
#include<string.h>

struct ps
{
	char pid[10];
	int total_sales_amount;
}record[50];

int main()
{	int n,l;
	char x[10];
	printf("Enter n:\n");
	scanf("%d" , &n);
	getchar();
	
	for(int i=0 ; i<n ; i++)
	{	
		printf("Enter pid\n");
		fgets(x , sizeof(x) , stdin);
		x[strcspn(x , "\n")] = '\0';
		printf("Enter total sales amount:\n");
		scanf("%d" , &l);
		getchar();

		int found =0;
		for(int j=0 ; j<i ; j++)
		{
			if(strcmp(record[j].pid , x) == 0 )
			{
				
				if(record[j].total_sales_amount <  l)
				{
					record[j].total_sales_amount = l;
				}
					found = 1;
					break;
			}
		}

		
		if(!found){
		strcpy(record[i].pid , x);
		record[i].total_sales_amount = l    ;
		}
	}
	for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (record[j].total_sales_amount < record[j + 1].total_sales_amount) {
                // Swap record[j] and record[j + 1]
                struct ps temp = record[j];
                record[j] = record[j + 1];
                record[j + 1] = temp;
            }
        }
   	 }
	for(int i = 0 ; i<n ; i++)
	{
		printf("%s %d\n" , record[i].pid , record[i].total_sales_amount);
	}
	return 0;
}


