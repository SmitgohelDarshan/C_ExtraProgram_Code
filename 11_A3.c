//Given an N x M integer matrix, if an element is 0, set its entire row and column to 0's.
#include <stdio.h>
void main(){
    int n, m;
    printf("Enter Size Of N x M Matrix: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Enter Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int rows[n], cols[m];
    for(int i = 0; i < n; i++) rows[i] = 0;
    for(int j = 0; j < m; j++) cols[j] = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(rows[i] == 1 || cols[j] == 1) {
                arr[i][j] = 0;
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}