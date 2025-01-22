// Write a program that asks the user to input two integers, a and b, and then state whether or not a is evenly 
// divisible by b. 
#include <stdio.h>
void main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a,&b);
    if (b == 0) {
        printf("Error");
    } else {
        if (a % b == 0) {
            printf("a is divisible by b.");
        } else {
            printf("a is not divisible by b.");
        }
    }
}