#include<stdio.h>


int main()
	{
	int a,b,choice,r,ch;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	do{
	printf("\n Enter Choice : \n 1.Add \n 2.Subtract \n 3. multiply \n 4.Divide \n 5.Bitwise AND \n 6.Bitwise OR \n 7.Bitwise XOR\n");
	scanf("%d" , &choice);
	switch(choice){
		case 1 : printf("%d + %d = %d\n" , a, b,a+b);
			 break;
		case 2 : printf("%d - %d = %d\n" , a, b,a-b);
			  break;
		case 3 : printf("%d * %d = %d\n" , a, b,a*b);
			  break;
		case 4 : printf("%d / %d = %d\n" , a, b,a/b);
			  break;
		case 5 : printf("%d & %d = %d\n" , a, b,a&b);
                         break;
		case 6 : printf("%d | %d = %d\n" , a, b,a|b);
                         break;
		case 7 : printf("%d ^ %d = %d\n" , a, b,a^b);
                         break;

	}
	printf("Do you want to continue ");
	scanf("%d" , &ch);
	}while(ch == 1 );
	return 0;
	}
