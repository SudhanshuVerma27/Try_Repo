
#include<stdio.h>
#include<math.h>
int main()
{
	long long b;
	int d=0;

	printf("Enter a binary number\n");
	scanf("%lld" , &b);

	while(b != 0 )
	{
		int r ,i=0;
		r = b %10;
		b = b/10;

		d += r * pow(2,i);
		++i;
	}
	printf("decimal : %d\n\n" , d );
}
