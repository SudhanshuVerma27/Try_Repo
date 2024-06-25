#include <stdio.h>
#include<limits.h>
int main() {
    // Write C code here
    int arr[10] , m1,m2;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    m1 = INT_MIN;
    m2 = INT_MIN;
    
    for(int i=0 ;i<10 ;i++)
    {
        if(arr[i] > m1)
        {
            m2 = m1;
            m1 = arr[i];
            
        }
        else if(arr[i] > m2 && arr[i] != m1)
        {
            m2 = arr[i];
        }
        
    }
    if(m2!=INT_MIN)
        {
            printf("%d" , m2);
        }
        else
        {
            printf("No second largest number\n");
        }

    return 0;
}

