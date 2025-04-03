/*
Write a C program that finds the second largest element in an array of integers using a loop. 
Input: A list of n integers. 
Output: The second largest element in the array. 
Example Input: 5, 1, 9, 3, 7 
Example Output: 7 
*/
#include <stdio.h>
void main(){
    int n, i, max, second_max, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = second_max = -1;
    
    for(int i = 0; i < n; i++){
        max = (arr[i] > arr[max]) ? i :  max;
    }
    for (i = 0; i < n; i++) {
        
        second_max = (arr[i]!= arr[max] && arr[i] > arr[second_max]) ? i : second_max;
    }

    if (second_max == -1) {
        printf("No second largest element");
    }
    else {
        printf("Second largest element is: %d", arr[second_max]);
    }
}