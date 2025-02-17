// Write a c program that test the value of an integer num1. If the value is 10, square num1. If it is 9 read a
// new value into num1. If it is 2 or 3, multiply num1 by 99 and print out the result.
#include <stdio.h>
void main(){
    int num1;
    printf("Enter number: ");
    scanf("%d",&num1);
    
    switch(num1){
        case 1: printf("%d not change.",num1);
        break;

        case 2: printf("%d is multiplied by 99.",num1, num1*99);
        break;

        case 3: printf("%d is multiplied by 99.",num1, num1*99);
        break;

        case 4: printf("%d not change",num1);
        break;
        
        case 5: printf("%d not change",num1);
        break;

        case 6: printf("%d not change",num1);
        break;

        case 7: printf("%d not change",num1);
        break;
        
        case 8: printf("%d not change",num1);
        break;
        
        case 9: printf("Enter new number.");
                scanf("%d",&num1);
        break;

        case 10: printf("square of %d = %d",num1, num1*num1);
        break;
    }
}