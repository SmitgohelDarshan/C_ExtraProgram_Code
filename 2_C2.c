//  Write a C program to find the second largest number among three given numbers using if-else. 
#include <stdio.h>
void main(){
    int num1, num2, num3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        if(num2 > num3)
        printf("Second Largest Number is %d.",num2);
        else
        printf("Second Largest Number is %d.", num3);
    }
    else if(num2 > num1 && num2 > num3){
        if(num1 > num3)
        printf("Second Largest Number is %d",num1);
        else
        printf("Second Largest Number is %d",num3);
    }
    else{
        printf("Second Largest Number is %d",num2);
    }
}
