#include <stdio.h>
#include<limits.h>
void find_unique(int arr[], int size) {
    int i, j,sum=0,s=0;
    // Iterate through each element
    for (i = 0; i < size; i++) {
        // Check if arr[i] is a duplicate
        sum = sum + arr[i];
    }
    
    for(i=1 ; i<=10 ; i++)
    {
        s += i;
    }
    int d = s-sum;
    printf("%d" , d);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    find_unique(arr, size);
    
    return 0;
}
