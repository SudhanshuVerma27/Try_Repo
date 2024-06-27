#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
	char str[100][100];
	int i,j,n,a[6];
	char * token;
	printf("Enter number \n");
	scanf("%d" , &n);
	getchar();
	for(i=0 ; i<n ; i++)
	{
		fgets(str[i] , sizeof(str[i]) , stdin);
		str[i][strcspn(str[i], "\n")] = '\0';
		getchar();

                j = 0;
		
                token = strtok(str[i], "|");
                while (token != NULL) {
                // Convert token to integer and store in array a
                a[j++] = atoi(token);
                token = strtok(NULL, "|");
        }
	if( a[0] < a[3])
	{
		printf("early\n");
	}
	else if(a[0] > a[3])
	{
		printf("Late\n");
	}
	else
	{
		if(a[1] < a[4])
			printf("Early\n");
		else if(a[1] > a[4])
			printf("Late\n");
		else{
			if(a[2] < a[5])
			{
				printf("Early\n");
			}
			else if(a[2] > a[5])
			{
				printf("Late\n");
			}
			else{
				printf("same\n");
			}
		}
	}

}
	
	return 0;
}	


