// Write a program to find median of array.
#include <stdio.h>
void main() {
    int n, temp;
    float median;  

    printf("Enter size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if(n % 2 == 0) {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;  
    } else {
        median = arr[n/2];  
    }

    printf("Median: %.1f", median);  
}

    
