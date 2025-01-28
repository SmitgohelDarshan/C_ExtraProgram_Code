//Without using % operator check weather given number is odd or even. 
#include <stdio.h>
void main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    if(number % 2 == 0)
        printf("%d is even number.",number);
    else
        printf("%d is odd number.",number);

}