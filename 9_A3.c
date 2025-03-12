// Write a program to copy the contents of one array into another in the reverse order.
#include <stdio.h>
void main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);

    int arr[n], arr2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        arr2[i]=arr[i];
    }

    printf("Reverse Order:");
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}