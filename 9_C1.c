// We have two arrays A and B each of 10 integers. Write a program that tests if every element of array A is 
// equal to corresponding element in array B. In other words, program must check if A [0] is equal to B [0] 
// and so on... The program prints 1 if all elements are equal and prints 0 if at least one element is not equal. 
#include <stdio.h>
void main() {
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter elements of B: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) { 
            printf("0");
            return; 
        }
    }

    printf("1");
}
