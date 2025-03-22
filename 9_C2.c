// Write a C program that finds the missing number in an array containing n-1 integers from 1 to n. You are 
// given an array that has numbers in the range 1 to n, but one number is missing. Using a loop, identify the 
// missing number. 
// Input: An array of integers containing n-1 elements. 
// Output: The missing number. 
// Example Input: 1, 2, 4, 5 (Missing number is 3) 
// Example Output: 3 
#include <stdio.h>
void main(){
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
    }
    for (int  i = 0; i < n-1; i++)
    {
        if(j == a[i]){
            j++;
        }
        else{
            printf("The missing number:%d",j);
            break;
        }
    }
}