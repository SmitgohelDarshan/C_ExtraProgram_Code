// We are given two arrays that represent the arrival and departure times of trains; the task is to find the 
// minimum number of platforms required so that no train waits. 
// Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00}, dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00}  
// Output: 3  
// Explanation: There are at-most three trains at a time (time between 9:40 to 12:00)
#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of trains: ");
    scanf("%d", &n);
    int arr[n], dep[n];

    for (int i = 0; i < n; i++) {
        printf("Train %d arrival time: ", i + 1);
        scanf("%d", &arr[i]);
        printf("Train %d departure time: ", i + 1);
        scanf("%d", &dep[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            if (dep[j] > dep[j + 1]) {
                int temp = dep[j];
                dep[j] = dep[j + 1];
                dep[j + 1] = temp;
            }
        }
    }

    int i = 0, j = 0, platforms = 0, result = 0;
    for (; i < n && j < n;) {
        if (arr[i] <= dep[j]) {
            platforms++; 
            i++;  
        } else {
            platforms--; 
            j++;  
        }
        if (platforms > result) {
            result = platforms;  
        }
    }
    printf("Minimum platforms needed: %d\n", result);
}