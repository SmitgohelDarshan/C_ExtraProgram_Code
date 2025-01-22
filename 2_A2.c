// Write a program that inputs two numbers a and b and then determine the product of two numbers is 
// greater than half of a.
#include <stdio.h>
void main(){
    float a,b,product;
    printf("Enter first Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    product = a * b;
    if(product>(a/2))
        printf("product of two numbers is greater than half of a");
    else
        printf("not");
}