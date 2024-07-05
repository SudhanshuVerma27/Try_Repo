// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    char str[] = "Hello World";
    int size;
    size = strlen(str);
    int n;
    scanf("%d" , &n);
    size++;
    for(int i=size-1 ; i>=n ; i--)
    {
        str[i+1] = str[i]; 
    }
    str[n] = 'k';
   printf("%s" , str);

    return 0;
}
