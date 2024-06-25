#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,temp,sum=0;
	printf("Enter :\n");
	scanf("%d" , &n);
	temp = n;
	while(temp!=0)
	{
		count++;
		temp = temp/10;
	}
	temp = n;
	while(temp != 0)
	{
		int r = temp%10;
		sum += pow(r , count);
		temp = temp / 10;
	}
	if(sum == n)
	{
		printf("Yes it is armstrong\n");
	}
	else
	{
		printf("No \n");
	}
	return 0;
}


	

