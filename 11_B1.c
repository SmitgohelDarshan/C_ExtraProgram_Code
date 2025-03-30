// Given a N x M row-wise sorted matrix, find the median of the matrix. (Note: N*M is always odd) 
#include <stdio.h>
void main() {
    int n, m, temp;
    float median;  

    printf("Enter size of an array: ");
    printf("N x M is odd:");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i][j]);
    }

    if(n % 2 == 0) {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;  
    } else {
        median = arr[n/2];  
    }

    printf("Median: %.1f", median);  
}