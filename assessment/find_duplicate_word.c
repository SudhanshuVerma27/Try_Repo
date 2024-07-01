#include<stdio.h>
#include<string.h>
#include <stdbool.h>
bool isAnagram(char *a , char *b )
{
	int c[256] = {0};
	if (strlen(a) != strlen(b)) {
        return false;
    	}
	int countA[256] = {0};  // Assuming ASCII characters
   	 int countB[256] = {0};
	for(int i=0 ; i<strlen(a) ; i++)
	{
		countA[a[i]]++;
       		 countB[b[i]]++;
	}
	for(int i=0 ; i<256 ; i++)
        {
                  if (countA[i] != countB[i]) {
         	   return false;  // If any count differs, strings are not anagrams
        }
        }
	 return true;
}
int main()
{
	char s[10];
	int i=0,j,l,count=0;
	printf("Enter string:");
	fgets(s , sizeof(s) , stdin);
	s[strcspn(s , "\n")] = '\0';
	char str2[10][10];
	char *pointer = strtok(s , "|");
	while(pointer != NULL)
	{
		strcpy(str2[i++] , pointer);
		pointer = strtok(NULL , "|");
	}
	int length = i;
	for(i=0 ; i<length ; i++)
	{
		for(j=i+1 ; j<length ;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				if(isAnagram(str2[i] , str2[j]))
				{
					printf("%s" , str2[j]);

				}
			}
		}
	}
	printf("%d" , count);
	return 0;
}
