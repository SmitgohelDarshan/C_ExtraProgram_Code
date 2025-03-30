/*
Given a square matrix mat, return the sum of the matrix diagonals. Only include the sum of all the elements 
on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary 
diagonal.
*/
#include <stdio.h>
void main() {
    int n, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i][i];  
        if (i != n - i - 1) {
            sum += arr[i][n - i - 1];  
        }
    }

    printf("Sum of diagonals: %d", sum);
}
