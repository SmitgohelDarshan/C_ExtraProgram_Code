// An Insurance company follows following rules to calculate premium. 
// 1. If a person’s health is excellent and the person is between 25 and 35 years of age, lives in a city, and is 
// a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs. 
// 2. If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 
// per thousand and her policy amount cannot exceed Rs. 1 lakh. 
// 3. If a person’s health is poor and the person is between 25 and 35 years of age, lives in a village, and is 
// a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. 
// 4. In all other cases the person is not insured. 
// Write a program to output whether the person should be insured or not, his/her premium rate and 
// maximum amount for which he/she can be insured.
#include <stdio.h>
void main() {
    char health, location, sex;
    int age,maxAmount;
    float premiumRate;

    printf("Enter health (e for excellent, p for poor): ");
    scanf(" %c", &health);  
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter location (c for city, v for village): ");
    scanf(" %c", &location);  
    printf("Enter sex (m for male, f for female): ");
    scanf(" %c", &sex);  

    if (health == 'e' && age >= 25 && age <= 35 && location == 'c') {
        if (sex == 'm') {
            premiumRate = 4.0;
            maxAmount = 200000;
            printf("Insured! Premium rate: Rs. %.2f per thousand, Maximum amount: Rs. %d", premiumRate, maxAmount);
        } else if (sex == 'f') {
            premiumRate = 3.0;
            maxAmount = 100000;
            printf("Insured! Premium rate: Rs. %.2f per thousand, Maximum amount: Rs. %d", premiumRate, maxAmount);
        } else {
            printf("Not insured");
        }
    } else if (health == 'p' && age >= 25 && age <= 35 && location == 'v') {
        if (sex == 'm') {
            premiumRate = 6.0;
            maxAmount = 10000;
            printf("Insured! Premium rate: Rs. %.2f per thousand, Maximum amount: Rs. %d", premiumRate, maxAmount);
        } else {
            printf("Not insured");
        }
    } else {
        printf("Not insured");
    }
}
