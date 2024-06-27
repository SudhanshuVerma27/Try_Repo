#include<stdio.h>
#include<string.h>
int count_con(char * str, int l)
{
	int count = 0;
	for(int i = 0 ; i < l ; i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
		continue;
		}
		else
		{
		count++;
		}
	}
	return count;
}
int is_con(char s)
{
	if(s == 'a' ||s == 'e' ||s == 'i' ||s == 'o' ||s == 'u')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}




int main()
{
	char str[20];
	int i,c;
	fgets(str , sizeof(str) , stdin);
	str[strcspn(str, "\n")] = '\0';
	int l;
	l = strlen(str);
	c = count_con(str , l );
	int t = c/2 + 1;
	for(i=0 ; i< strlen(str) ; i++)
	{
		if(is_con(str[i]))
		{
			t--;
		}
		if(t==0)
		{
			printf("%ld" , strlen(str) - i - 1     );
			break;
		}
	}
	return 0;
}


	 	
