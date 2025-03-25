// Chef visited a grocery store for fresh supplies. There are N items in the store where the ith item has a 
// freshness value Ai and cost Bi. 
 
// Chef has decided to purchase all the items having a freshness value greater than equal to X. Find the total 
// cost of the groceries Chef buys. 
 
// Input Format 
// The first line of input will contain a single integer T, denoting the number of test cases. 
// Each test case consists of multiple lines of input. 
// The first line of each test case contains two space-separated integers N and X — the number of items and 
// the minimum freshness value an item should have. 
// The second line contains N space-separated integers, the array A, denoting the freshness value of each 
// item. 
// The third line contains N space-separated integers, the array B, denoting the cost of each item. 
// Output Format 
// For each test case, output on a new line, the total cost of the groceries Chef buys. 
#include <stdio.h>
void main(){
    int t, n, x, sum = 0;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    for(int test = 1; test <= t; test++) {
        printf("Enter the number of items and the minimum freshness value: ");
        scanf("%d %d", &n, &x);

        int arrA[n], arrB[n];
        printf("Enter the Freshness values: ");
        for(int i = 0; i < n; i++) {
            scanf("%d", &arrA[i]);
        }

        printf("Enter the cost of each item: ");
        for(int i = 0; i < n; i++) {
            scanf("%d", &arrB[i]);
        }
        
        for(int i = 1; i < n; i++) {
            if(arrA[i] >= x) {
                sum += arrB[i];
            }
        }

        printf("test case %d: the total cost of the groceries Chef buys: %d\n", test, sum);
    }
}