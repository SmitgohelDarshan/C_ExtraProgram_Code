// A company insures its drivers in the following cases:  
// If the driver is married. 
// If the driver is unmarried, male & above 30 years of age. 
// If the driver is unmarried, female & above 25 years of age. 
// In all other cases the driver is not insured. If the marital status, sex and age of the driver are the inputs, 
// write a program to determine whether the driver is to be insured or not.
#include <stdio.h>

void main() {
    int maritalStatus, sex, age;
    printf("Enter marital status (1 for unmarried, 2 for married): ");
    scanf("%d", &maritalStatus);
    printf("Enter sex (1 for male, 2 for female): ");
    scanf("%d", &sex);
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (maritalStatus == 2) {
        printf("Driver is insured.\n");
    } 
    else if (maritalStatus == 1) {
        if (sex == 1 && age > 30) {
            printf("Driver is insured.\n");
        } 
        else if (sex == 2 && age > 25) {
            printf("Driver is insured.\n");
        } 
        else {
            printf("Driver is not insured.");
        }
    }
}
