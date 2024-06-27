




#include<stdio.h>
#include<string.h>
#include<ctype.h>


void removeLastOccurrence(char *str , const char *word)
{
	int str_len = strlen(str);
	int wl = strlen(word);

	for(int i = str_len - wl ; i>=0 ; i-- )
	{
		if(strncmp(str+i , word , wl) == 0 )
		{
			for(int j = i ; j < i+wl ; j++)
			{
				str[j] = ' ';
			}
			return ;
		}
	}
}






int main()
{
	char str[20], word[10];
	printf("Enter the string\n");
	fgets(str , sizeof(str) ,   stdin);
	str[strcspn(str, "\n")] = '\0';  // Remove the newline character
    
    	// Input word to remove
    	printf("Enter the word to remove from the end:\n");
   	scanf("%s", word);

	removeLastOccurrence(str, word);

    	// Output the modified string
    	printf("String after removing last occurrence of '%s':\n%s\n", word, str);

    	return 0;
}


