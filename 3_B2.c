// A library charges a fine for every book returned late. For first 5 days, the fine is 50 paisa, for 6-10 days 
// fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 Days, your membership 
// will be cancelled. Write a program to accept the number of days the member is late to return the book 
// and display the fine or the appropriate message.
#include <stdio.h>

void main() {
    int days = 0;
    float fine = 0.0;
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);
    if (days <= 0) {
        printf("No fine.");
    } else if (days <= 5) {
        fine = days * 0.50; 
        printf("Fine for %d days late is: %.2f Rupees", days, fine);
    } else if (days <= 10) {
        fine = days * 1.0; 
        printf("Fine for %d days late is: %.2f Rupees", days, fine);
    } else if (days <= 30) {
        fine = days * 5.0; 
        printf("Fine for %d days late is: %.2f Rupees", days, fine);
    } else {
        printf("Your membership has been cancelled due to delay.");
    }
}