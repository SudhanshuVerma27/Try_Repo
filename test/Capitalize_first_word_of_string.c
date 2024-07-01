#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
	char str[10];
	printf("Enter string : \n");
	fgets(str , sizeof(str) , stdin);
	str[strcspn(str , "\n")] = '\0';

	for(int i=0 ; i < strlen(str) ; i++)
	{
		if(i == 0)
		{
			str[i] = toupper(str[i]);
		}
		if( str[i] == ' '  )
		{
			str[i+1] = toupper(str[i+1]);
		}
	}
	for(int i = 0 ; i< strlen(str) ; i++)
	{
		printf("%c" , str[i]);
	}
	return 0;
}
