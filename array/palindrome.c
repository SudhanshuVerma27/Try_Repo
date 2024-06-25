#include <stdio.h>

int main() {
    int arr[10] , i ,s,e,flag = 1;
    
    for(i = 0 ; i<10 ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    s=arr[0];
    e = arr[9];
    while(s<e)
    {
        if(s!=e)
        {
            flag=0;
        }
        s++;
        e--;
    }
    if(flag==1)
    printf("True\n");
    
    return 0;
}

