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

    int i = 0, j = 0, platforms_needed = 0, result = 0;
    for (; i < n && j < n;) {
        if (arr[i] <= dep[j]) {
            platforms_needed++; 
            i++;  
        } else {
            platforms_needed--; 
            j++;  
        }
        if (platforms_needed > result) {
            result = platforms_needed;  
        }
    }
    printf("Minimum platforms needed: %d\n", result);
}



//  int max_platforms_needed = 1;

//     for (int i = 1; i < n; i++) {
//         int platforms_needed = 1; // Reset platforms needed for each train

//         for (int j = 0; j < i; j++) {
//             // If there is an overlap between trains
//             if (arr[i] >= arr[j] && arr[i] <= dep[j]) {
//                 platforms_needed++;
//             }
//         }

//         // Update maximum platforms needed
//         if (platforms_needed > max_platforms_needed) {
//             max_platforms_needed = platforms_needed;
//         }
//     }