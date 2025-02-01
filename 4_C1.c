// Design a program for an e-commerce platform that calculates the final price of a product after applying 
// discounts based on the user's membership type and seasonal offers. 
 
// The program should accept the following inputs: 
// Product Price (positive float value). 
// Membership Type: 
// Gold Member: 20% discount. 
// Silver Member: 10% discount. 
// Regular Customer: 5% discount. 
 
// Seasonal Discount Offer: 
// If a seasonal discount is active, an additional 10% discount is applied on the discounted price. 
// If no seasonal discount, only the membership discount applies. 
 
// Invalid Inputs: Handle invalid membership types and negative prices gracefully. 
 
// Input: 
// Product Price: 1000 
// Membership Type: Gold 
// Seasonal Discount: Yes 
 
// Output: 
// Final Price: 720 (20% Gold discount + 10% Seasonal discount).
#include <stdio.h>

void main() {
    float ProductPrice, FinalPrice, MembershipDiscount = 0, SeasonalDiscount = 0;
    char MembershipType, SeasonalDiscount;
    printf("Enter Product price: ");
    scanf("%f", &ProductPrice);

    printf("Enter Membership Type (g for Gold, s for Silver, r for Regular Customer): ");
    scanf(" %c", &MembershipType);

    printf("Seasonal Discount is Yes(y type) or No(n type): ");
    scanf(" %c", &SeasonalDiscount);

    if (MembershipType == 'g') {
        MembershipDiscount = 0.20;  
        FinalPrice = ProductPrice * (1 - MembershipDiscount);
    } else if (MembershipType == 's') {
        MembershipDiscount = 0.10;  
        FinalPrice = ProductPrice * (1 - MembershipDiscount);
    } else if (MembershipType == 'r') {
        MembershipDiscount = 0.05;  
        FinalPrice = ProductPrice * (1 - MembershipDiscount);
    }

    if (SeasonalDiscount == 'y') {
        SeasonalDiscount = 0.10;  
        FinalPrice = FinalPrice * (1 - SeasonalDiscount);
    }

    printf("Final Price: %.2f (%.0f%% %s discount + %.0f%% Seasonal discount)", 
            FinalPrice, 
            MembershipDiscount * 100, 
            (MembershipType == 'g') ? "Gold" : (MembershipType == 's') ? "Silver" : "Regular", 
            SeasonalDiscount * 100);
}

