#include<stdio.h>
#include<string.h>
void rm(char *str)
{
    int i;
    int l = strlen(str);
    int j=0;
    for(i=0 ; i<l ; i++)
    {
        if(str[i] != str[i+1])
        {
            str[j++] = str[i];
        }
        else
        {
            while(str[i] == str[i+1])
            {
                i++;
            }
        }
    }
    str[j] = '\0';
    
    if(j != l)
    {
        rm(str);
    }
    // else 
    // {
    //     return;
    // }
    
}
int main()
{
    
    
    char str[30];
    printf("Enter string\n");
    fgets(str , sizeof(str) , stdin);
    
    rm(str);
    puts(str);
    return 0;
}


