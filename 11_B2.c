//Given an m x n matrix, return all elements of the matrix in spiral order. 
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

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    while(top < bottom && left < right){
        // top row from left to right.
        for (int j = left; j <= right; j++){
            printf("%d ", arr[top][j]);
        }
        
        // right column from top+1 to bottom.
        for (int i = top + 1; i <= bottom; i++){
            printf("%d ", arr[i][right]);
        }
        
        // bottom row from right-1 to left.
        for (int j = right - 1; j >= left; j--){
            printf("%d ", arr[bottom][j]);
        }
        
        // left column from bottom-1 to top+1.
        for (int i = bottom - 1; i >= top + 1; i--){
            printf("%d ", arr[i][left]);
        }
        
        top++;
        bottom--;
        left++;
        right--;
    }

    if(top == bottom){
        for (int j = left; j <= right; j++){
            printf("%d ", arr[top][j]);
        }
    }
    else if(left == right){
        for (int i = top; i <= bottom; i++){
            printf("%d ", arr[i][left]);
        }
    }
}
