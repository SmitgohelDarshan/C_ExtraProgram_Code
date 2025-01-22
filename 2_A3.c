// Write a program that inputs two integers and determines whether it is evenly divisible by 6 and 7.
#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 % 6 == 0 && num2 % 6 == 0){
        printf("Both numbers are divisible by 6");
    }else{
        printf("Both numbers are NOT divisible by 6");
    }

    if(num1 % 7 == 0 && num2 % 7 == 0){
        printf("Both numbers are divisible by 7");
    }else{
        printf("Both numbers are NOT divisible by 7");
    }
}   
