// Write a program to tally how many of each number within a range are entered. 
#include <stdio.h>
void main(){
    int n;

    printf("Enter size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];

    for(int i = 0; i < n; i++){
        min = (min < arr[i])?(min):(arr[i]);
        max = (max > arr[i])?(max):(arr[i]);
    }
    printf("Range: %d - %d\n", min, max);

    printf("Tally of numbers:\n");
    for (int num = min; num <= max; num++) { 
        int count = 0;
        for (int i = 0; i < n; i++) { 
            if (arr[i] == num) {
                count++;
            }
        }
        if (count > 0) { 
            printf("%d appears %d times\n", num, count);
        }
    }
}