#include<stdio.h>
#include<string.h>

#include<ctype.h>

int main()
{
	const char *a = "silent";
	const char *b = "listen";

	int count1[256] = {0};
	int count2[256] = {0};

	int len1 = strlen(a);
	int len2 = strlen(b);
	int flag = 0;

	if(len1 != len2)
	{
		printf("NO\n");
	}

	else
	{
		for(int i=0 ; i<len1 ; i++)
		{
			count1[tolower(a[i])]++;
		}

		 for(int i=0 ; i<len1 ; i++)
                {
                        count2[tolower(b[i])]++;
                }

		 for(int i=0 ; i<256 ; i++)
                {
                        if(count1[i] != count2[i])
					{
					printf("NO\n");
					flag = 1;
					}

                }
		if(flag == 0)
		{
		printf("YES\n");
		}
	}
	return 0;
}



