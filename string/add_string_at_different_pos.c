// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

#define MAX_SIZE 100
void insert_string(char str[] , char sub[] , int l)
{
    int i,j,l1,l2;
    l1 = strlen(str);
    l2 = strlen(sub);
    
    for(i=l1 ; i>=l ; i--)
    {
        str[i+l2] = str[i];
    }
    for(i=0 ; i<l2 ; i++)
    {
        str[i+l] = sub[i];
    }
}
int main() {
    // Write C code here
    char str[MAX_SIZE] , sub1[MAX_SIZE] , sub2[MAX_SIZE];
    printf("Enter string\n");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str,"\n")] = '\0';
    
    fgets(sub1 , sizeof(sub1) , stdin);
    
    fgets(sub2 , sizeof(sub2) , stdin);
    
    insert_string(str , sub1 , 3);
    insert_string(str , sub2 , 4);
    insert_string(str , "!" , strlen(str));
    
    printf("%s" , str);

    return 0;
}
