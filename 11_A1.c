// Given a N x M matrix, print its element in zig-zag fashion, i.e., print first row from left to right, second row 
// from right to left, third row again from left to right and so on. 
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
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < m; j++){
                printf("%d ", arr[i][j]);
                }
        }
        else{
            for(int j = m - 1; j >= 0; j--){
                printf("%d ", arr[i][j]);
                }
        }    
    }
}
