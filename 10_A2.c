// Given a list of N integers, representing height of mountains. Find the height of the tallest mountain. 
// Input  
// First line will contain T, number of test cases. Then the test cases follow. 
// The first line in each test case contains one integer, N. 
// The following line contains N space separated integers: the height of each mountains. 
// Output: 
// For each test case, output one line with one integer: the height of the tallest mountain for that test case. 
#include <stdio.h>
void main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for(int test = 1; test <= t; test++) {
        int n;
        printf("Enter the number of mountains for test case %d: ", test);
        scanf("%d", &n);

        int arr[n];
        printf("Enter the heights of the mountains: ");
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int max = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }

        printf("Tallest mountain height in test case %d: %d\n", test, max);
    }
}



