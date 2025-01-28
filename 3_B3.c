//Without using == operator check weather both given number is equal or not. 
#include <stdio.h>
void main(){
    int num1, num2;
    printf("Enter Two numbers: ");
    scanf("%d %d",&num1, &num2);
    if((num1 - num2)==0)  //(num1 ^ num2) == 0
        printf("Same numbers.");
    else
        printf("Not same numbers.");
}