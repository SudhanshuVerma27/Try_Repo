#include<stdio.h>
#include<string.h>

int main()
{
	char str[100] ,
	     substr[10],
	     c;
	int i,j;
	printf("Enter a string\n");
	fgets(str ,sizeof(str) , stdin);
	fgets(substr ,sizeof(substr) , stdin);
	scanf("%c" , &c);
	str[strcspn(str, "\n")] = '\0';
    	substr[strcspn(substr, "\n")] = '\0';
	char *result = strstr(str, substr);
	if(result != NULL)
		{
			printf("%ld" , result-str);
		}
	else
		{
		printf("-1");
		}
	for(i=0 ; i<strlen(str) ; i++)
	{
		if(str[i] == c)
		{
			printf("character Found at %d\n" , i);
		}
	}
	return 0 ;
}


