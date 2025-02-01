// Write a program to find the greatest of the three numbers entered through the keyboard using conditional 
// operators. 
#include <stdio.h>
void main(){
    int num1, num2, num3;
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);
    (num1 >= num2)?((num1 >= num3)?(printf("%d is Greatest number.",num1)):(printf("%d is Greatest Number.",num3))):((num2 >= num3)?(printf("%d is Greatest Number.",num2)):(printf("%d is Greatest Number.",num3)));

}