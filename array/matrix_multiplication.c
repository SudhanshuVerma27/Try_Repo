#include <stdio.h>

int main() {
    int arr[3][3] , arr2[3][3] , r1,c1,r2,c2 ,r[3][3] , k , sum = 0;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
    printf("Enter array2\n");
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            scanf("%d" , &arr2[i][j]);
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum += arr[i][k] * arr2[k][j];
            }
            r[i][j] = sum;
            sum = 0;
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d " , r[i][j]);
        }
    }
    
    return 0;
}

