#include<stdio.h>
#include<math.h>
int main()
{
	int  n,s,count=0    , mod = 1 , temp ;
	printf("Enter a number : \n");
	scanf("%d" , &n);
	temp = n;
	s = n * n;
	while(temp)
	{
		count++;
		temp=temp/10;
	}
	for(int i=0 ; i<count ; i++)
	{
		mod = mod*10;
	}
	int r = s%mod;
	if(n == r)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}



