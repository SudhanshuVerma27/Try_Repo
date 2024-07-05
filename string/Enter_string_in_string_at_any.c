// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#define MAX_LENGTH 100
int main() {
    char str[MAX_LENGTH];  
    char s[] = "hello";    // Substring to insert
    int size;              // Length of original string
    int s2;                // Length of substring
    int n;                 // Position to insert substring

    // Input the original string and insertion position
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character if present

    printf("Enter the position to insert '%s': ", s);
    scanf("%d", &n);
    int i,j;
    // Calculate lengths
    size = strlen(str);
    s2 = strlen(s);
    for(i=size-1 ; i>=n ; i--)
    {
        str[i+s2] = str[i];
    }
    for(i=0 ; i<s2 ; i++)
    {
        str[i+n] = s[i];
    }
    int newsize = strlen(str);
    for(i=0 ; i<newsize ; i++)
    {
        printf("%c" , str[i]);
    }

    return 0;
}
