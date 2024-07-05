#include <stdio.h>
#include<limits.h>
void find_unique(int arr[], int size) {
    int i, j;
    printf("unique elements in the array: ");
    // Iterate through each element
    for (i = 0; i < size; i++) {
        // Check if arr[i] is a duplicate
        int flag = 0;
        for(j=0 ; j<size ;j++)
        {
            if(i != j)
            {
                if(arr[i] == arr[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            printf("%d " , arr[i]);
        }
        
        
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 1,3,2,8,9,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    find_unique(arr, size);
    
    return 0;
}
