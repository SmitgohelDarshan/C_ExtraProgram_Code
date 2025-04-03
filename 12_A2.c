// Rotate an array: Rotate an array to the left or right by k positions.
#include <stdio.h>
void main(){
    int n, i, j, k, choice;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate(k): ");
    scanf("%d", &k);

    if(k > n){
        k = k % n;
    }
    else if(k < 0){
        k = k + n;
    }

    printf("Enter 1 for left rotation, 2 for right rotation: ");
    scanf("%d", &choice);

    if(choice == 1) {
        int temp[k];
        
        printf("Rotated array: ");
        for (i = k; i < n; i++) {
            printf("%d ", arr[i]);
        }
    
        for (i = 0; i < k; i++) {
            printf("%d ", arr[i]);
        }
    } 
    else if(choice == 2) {  
        int temp[k];
        
        printf("Rotated array: ");
        for (i = n - k; i < n; i++) {
            printf("%d ", arr[i]);
        }
        
        for (i = 0; i < n - k; i++) {
            printf("%d ", arr[i]);
        }
        
    } 
    else {
        printf("Invalid choice!\n");
        return;
    }
}