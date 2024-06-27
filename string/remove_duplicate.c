#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	char str[10];
	bool temp[1000] = {false};
	int y = 0;
	printf("Enter 9 char string\n");
	fgets(str , sizeof(str) , stdin);
	
	for(int i = 0 ; i<=strlen(str) ; i++)
	{
		char curr = str[i];
		if(!(temp[curr]))
			{
				temp[curr] = true;
				str[y++] = str[i];
			}
	}

	str[y] = '\0';


	
	fputs(str , stdout);
	return 0 ;
}



