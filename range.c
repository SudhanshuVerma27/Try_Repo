
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
       	printf("Char MIN : %d\n" , CHAR_MIN);
	 printf("Char MAX : %d\n" , CHAR_MAX);
	 printf("UChar MAX : %d\n" , UCHAR_MAX);
	

	 printf("SHRT_MIN: %d\n", SHRT_MIN);
   	 printf("SHRT_MAX: %d\n", SHRT_MAX);
   	 printf("USHRT_MAX: %u\n", USHRT_MAX);


         printf("INT MIN : %d\n" , INT_MIN);
	 printf("INT MAX : %d\n" , INT_MAX);
	 printf("UINT MAX : %d\n" , UINT_MAX);
	



	printf("LONG_MIN: %ld\n", LONG_MIN);
   	 printf("LONG_MAX: %ld\n", LONG_MAX);
    	printf("ULONG_MAX: %lu\n", ULONG_MAX);
	


	printf("FLT_MIN: %e\n", FLT_MIN);
	 printf("FLT_MAX: %e\n", FLT_MAX);

	    printf("DBL_MIN: %e\n", DBL_MIN);
   	 printf("DBL_MAX: %e\n", DBL_MAX)
		 ;
   	 printf("LDBL_MIN: %Le\n", LDBL_MIN);
    	printf("LDBL_MAX: %Le\n", LDBL_MAX);

return 0;
}
