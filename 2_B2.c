// While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
// If quantity and price per item are input through the keyboard, write a program to calculate the total 
// expenses.
#include <stdio.h>
void main() {
    int quantity,price;
    float expenses;
    printf("Enter product quantity and price per items: ");
    scanf("%d %d",&quantity,&price);
    if(quantity > 1000){
        expenses = quantity * price * 0.9; 
    }
    else{
        expenses = quantity * price; 
    }

    printf("Total expenses: %.2f",expenses);
}