#include <stdio.h>

int main() {
    // Write C code here
    int a[10] , i , n,size = 10;
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("Enter number \n");
    scanf("%d" , &n);
    
    for(i=0 ; i<n ;i++)
    {
        int t;
        t = a[0];
        for(int j=0 ; j<10 ; j++)
        {
            a[j] = a[j+1];
        }
        a[9] = t;
    }
    for(i=0 ; i<10 ;i++)
    {
        printf("%d " , a[i]);
    }

    return 0;
}


