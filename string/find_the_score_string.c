#include<stdio.h>
#include<string.h>

int isPalindrome(char *s, int len) {
    int start = 0;
    int end = len - 1;
    
    while (start < end) {
        if (s[start] != s[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    
    return 1; // It is a palindrome
}

int main()
{
	char str[20];
	printf("Enter string :");
	fgets(str , sizeof(str) , stdin);

	int length = strlen(str);
    	int score = 0;  

	for(int i=0 ; i <= length-4 ; i++)
	{
		if (isPalindrome(str + i, 4)) {
         	   score += 5;
       		 }

		if (i <= length - 5 && isPalindrome(str + i, 5)) {
         	   score += 10;
       		 }

	}

	printf("%d\n" , score);
	return 0;
}
