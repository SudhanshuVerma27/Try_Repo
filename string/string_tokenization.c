#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char *token;
	char *words[100];
	 fgets(str , sizeof(str) , stdin);
	 int len = strlen(str);
	 if(str[len-1] == "\n")
	 {
		 str[len-1] = "\0";
	 }

	 fputs(str , stdout);

	 token = strtok(str , "|");
	 while(token != NULL)
	 {
		 printf("%s\n" , token);
		 token = strtok(NULL , "|");
	 }
	 return 0;
}

