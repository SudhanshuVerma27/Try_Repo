#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
	char str1[10],str2[10];
	int i,j,n,a[10] , num1=0 , num2=0;
	char * token;
	printf("Enter number \n");
	scanf("%d" , &n);
	getchar();
	
	for(i=0 ; i<n ; i++)
	{
	    printf("Enter t1\n");
	    fgets(str1 , sizeof(str1) , stdin);
	    
	    token = strtok(str1 , "|");
	    while(token != NULL)
	    {
	        num1 = num1*10 + atoi(token);
	        token = strtok(NULL , "|");
	    }
	    
	    printf("Enter t2\n");
	    fgets(str2 , sizeof(str2) , stdin);
	    
	    token = strtok(str2 , "|");
	    while(token != NULL)
	    {
	        num2 = num2*10 + atoi(token);
	        token = strtok(NULL , "|");
	    }
	    
	    if(num1 < num2)
	{
	    printf("Early\n");
	}
	
	    
	}
	
}
