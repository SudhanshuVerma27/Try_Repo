#include<stdio.h>
#include<string.h>

int main()
{
	char a[10],b[10],c[30];
	

	



	int flag = 0;
	printf("Enter a , b c ");
	fgets(a , sizeof(a) , stdin);
	a[strcspn(a , "\n")]='\0';
	fgets(b , sizeof(b) , stdin);
	b[strcspn(b , "\n")]='\0';
	fgets(c , sizeof(c) , stdin);
	c[strcspn(c , "\n")]='\0';

	int n[256] = {0};

	for(int i=0 ; i<strlen(c) ; i++)
	{
		n[c[i]]++;
	}

	for(int i=0 ; i<strlen(a) ; i++)
        {
                if(n[a[i]])
		{
			n[a[i]]--;
		}
		else{
			flag = 1;
		}
        }
	 for(int i=0 ; i<strlen(b) ; i++)
        {
                if(n[b[i]])
                {
                        n[b[i]]--;
                }
                else{
                        flag = 1;
                }
        }
	 if(flag == 1)
	 {
		 printf("NO\n");
	 }
	 else
	 {
		 for(int i=0 ; i<256 ; i++)
		 {
			 if(n[i]!=0)
			 {
				 printf("NO\n");
				 break;
			 }
			 else
			 {
				 printf("YES\n");
				 break;
			 }
		 }
	 }

	 return 0;
}




