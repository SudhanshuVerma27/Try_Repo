#include<stdio.h>
#include<string.h>

void reverseword(char *s)
{
	int start=0;
	int e= strlen(s);

	for(int i=0 ; i<=e ; i++)
	{ 
		if(s[i] == ' ' || s[i] == '\0')
		{
			int j,k;
			for(j = start , k = i-1 ; j<k ; j++ , k--)
			{
				char t = s[j];
				s[j] = s[k];
				s[k] = t;
			}
			start = i+1;
		}
	}
	int i,j;
	for(i=0,j=e-1 ; i<j ; j-- , i++)
	{
		char t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}

int main()
{
	char str[10];
	printf("Enter a string of words\n");
	fgets(str , sizeof(str), stdin);

	str[strcspn(str ,  "\n")] = '\0';

	reverseword(str);

	printf("Reversed string : %s\n" , str);
	return 0;
}
