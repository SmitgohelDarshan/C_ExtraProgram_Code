// Write a program that reads two real numbers and tells whether the product of two numbers is equal or 
// greater than 100.
#include <stdio.h>
void main(){
    int num1,num2,product;
    printf("Enter first Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    product = num1 * num2;
    if(product>=100)
        printf("Equal number");
    else
        printf("greater than 100");
}