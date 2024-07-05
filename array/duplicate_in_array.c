#include <stdio.h>
#include<limits.h>
void find_duplicates(int arr[], int size) {
    int i, j;
    printf("Duplicate elements in the array: ");
    
    // Iterate through each element
    for (i = 0; i < size; i++) {
        // Check if arr[i] is a duplicate
        int flag = 0;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j] && arr[i] != INT_MIN) {
                flag = 1;
                arr[j] = INT_MIN;
                //printf("%d ", arr[i]);
                break;  // Once a duplicate is found, break inner loop
            }
        }
        if(flag)
        {
            printf("%d " , arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 8 , 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    find_duplicates(arr, size);
    
    return 0;
}
