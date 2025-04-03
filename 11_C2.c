// Check a given matrix is a sparse matrix or not. 
#include <stdio.h>
void main(){
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }
    if (count > ((n * m) / 2)) {
        printf("Sparse Matrix");
    }
    else {
        printf("Not a Sparse Matrix");
    } 
}