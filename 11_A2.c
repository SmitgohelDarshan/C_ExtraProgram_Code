// Given a N x M(N rows and M columns) matrix, print it upside down, i.e, last row should come first, second 
// last should come second......so on..and finally first row should come in last.
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

    printf("upside down Matrix:\n");
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}