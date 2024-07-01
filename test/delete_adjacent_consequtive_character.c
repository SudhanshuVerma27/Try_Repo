#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	printf("Enter string :\n");
	fgets(str , sizeof(str) , stdin);

	str[strcspn(str,"\n")] = '\0';

	/* for(int i=0 ; i < strlen(str)-1 ; i++)
	{	int j;
		char c;
		if( str[i] - str[i+1] == -1)
		{	c = str[i+1]; 
			j = i;
			while(j < strlen(str) - 2)
			{
				str[j] = str[j+2];
				j++;
			}
			str[j] = '\0';
		}
		if(str[i+1] - c == -1)
		{
			c = str[i+1];
                        j = i;
                        while(j < strlen(str) - 2)
                        {
                                str[j] = str[j+2];
                                j++;
                        }
                        str[j] = '\0';

		}
		else
		{
			c = ' ';
		}
	} */
	
	
	int flag = 0;
	flag = 0;
		for(int i=0 ; i< strlen(str) - 1 ; i++)
		{	
			int j;
			if(str[i] - str[i+1] == -1)
			{
				j = i;
				flag = 1;
				while(j < strlen(str) - 2)
                       		 {
                               		 str[j] = str[j+2];
                               		 j++;
			         }
			
			}
			str[j] = '\0';
	}


	for(int i=0 ; i<strlen(str) ; i++)
	{
		printf("%c" , str[i]);
	}
	return 0;
}

