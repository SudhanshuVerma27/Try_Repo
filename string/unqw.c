#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],
	      *token,uniq[10][10],uniq2[10][10];
	int i=0,a,q[10],flag,j,c=0,n,l,l1;
	printf("Enter string : \n");
	fgets(str , sizeof(str) , stdin);
      	getchar();
	l=strlen(str);
	





	
	

	token = strtok(str , " ");
	while(token!=NULL)
	{
		strcpy(uniq[i++],token);
		token=strtok(NULL," ");
	}
	l1=i;
for(i=0;i<l1;i++)
{
for(j=i;j<l1;j++)
{
if((strcmp(uniq[i],uniq[j])==0) && i!=j)
{
	q[c++]=i;
	q[c++] = j;
}
}
}
n=c;
a=0;
for(i=0;i<l1;i++)
{
	flag=0;
	for(c=0;c<n;c++)
	{
		if(strcmp(uniq[q[c]],uniq[i])==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag==0)
		strcpy(uniq2[a++],uniq[i]);
}
n=a;
for(i=0;i<n;i++)
{
	printf("%s\t",uniq2[i]);
}
printf("\n");


return 0;
}


