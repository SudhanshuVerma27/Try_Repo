#include <stdio.h>
#include<limits.h>

void count_occ(int arr[], int size) {
    int i, j;
    int b[size],count=0;
    for(i=0 ; i<size ; i++)
    {
        b[i] = -1;
    }
    // Iterate through each element
    for (i = 0; i < size; i++) {
        // Check if arr[i] is a duplicate
        count = 1;
        for(j=i+1 ; j<size ; j++)
        {
                if(arr[i] == arr[j])
                {
                    b[j] = 0;
                    count++;
                }
        }
        if(b[i] != 0){
        b[i] = count;
        }
    }
    
    for(i=0 ; i<size ; i++)
    {
        if(b[i] != 0){
            printf("%d %d" , arr[i] , b[i]);
            printf("\n");
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4,6,7,8,9,10,1,2,3,4,5,6,7,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    count_occ(arr, size);
    
    return 0;
}
