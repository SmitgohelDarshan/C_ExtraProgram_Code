// Write a program that interchanges the odd and even elements of an array.
#include <stdio.h>
void main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("Array after swapping: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
            
    
}