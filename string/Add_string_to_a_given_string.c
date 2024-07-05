// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

#define MAX_SIZE 100
void remove_string(char str[] , char sub[] ,char sub2[], int l)
{
    int i,j,l1,l2,l3;
    l1 = strlen(str);
    l2 = strlen(sub)-1;
    l3 = strlen(sub2)-1;
    if(l2==l3){
    for(i=l,j=0 ; i<=(l+l3)&&j<l3 ; i++,j++)
    {
        str[i] = sub2[j];
    }
    }
    else if(l2 < l3)
    {
        int buff = l3-l2;
        for(int i=l1-1 ; i>=l+l2 ; i--)
        {
            str[i+1] = str[i];
        }
        int i,j;
        for(i=l,j=0 ; i<=(l+l3) && j<l3 ; i++,j++)
        {
            str[i] = sub2[j];
        }
    }
    else if(l2 > l3)
    {
        int buff = l2-l3;
        for(int i=l+l3 ; i<l1-buff ; i++)
        {
            str[i] = str[i+buff];
        }
        str[l1-buff] = '\0';
        str[l1 - buff] = '\0'; // Ensure the string is null-terminated
        for (int i = l, j = 0; i < (l + l3) && j < l3; i++, j++) {
            str[i] = sub2[j];
        }
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
    
    remove_string(str , sub1 ,sub2, 0);
    
    printf("%s" , str);

    return 0;
}
