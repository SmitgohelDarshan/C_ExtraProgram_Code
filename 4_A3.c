// The policy followed by a company to process customer orders is given by the following rules: 
// (a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement. 
// (b) If has credit is not OK do not supply. Send him intimation. 
// (c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him 
// data the balance will be shipped. 
// Write a C program to implement the company policy.
#include <stdio.h>

void main() {
    int orderQuantity, stockQuantity;
    char creditStatus;
    printf("Enter order quantity: ");
    scanf("%d", &orderQuantity);
    printf("Enter stock quantity: ");
    scanf("%d", &stockQuantity);
    printf("Is customer credit OK? (Y/N): ");
    scanf(" %c", &creditStatus); // Space before %c to capture any leading whitespace

    if (creditStatus == 'N' || creditStatus == 'n') {
        printf("Credit not OK. Order cannot be processed. Send intimation to customer.");
    } else {
        if (orderQuantity <= stockQuantity) {
            printf("Order processed. Supplying %d items.", orderQuantity);
        } else {
            printf("Order fulfilled. Supplying %d items. Balance will be shipped later.", stockQuantity);
        }
    }
}
