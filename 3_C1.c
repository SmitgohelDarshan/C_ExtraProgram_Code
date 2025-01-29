//Tax is computed on the taxable income (Gross Income - Deductions) based on the progressive tax slab structure.
// Example slab structure for a non-senior citizen:
// Up to ₹2,50,000: No tax.
// ₹2,50,001 to ₹5,00,000: 5%.
// ₹5,00,001 to ₹10,00,000: 20%.
// Above ₹10,00,000: 30%.
// Deductions and Benefits: 
// Tax-free income limit increases for senior citizens: 
// Senior Citizen (60–79): Up to ₹3,00,000 tax-free. 
// Super Senior Citizen (80+): Up to ₹5,00,000 tax-free. 
 
// Apply deductions under relevant tax rules before calculating the taxable income. 
 
// Error Handling: 
// Reject negative income values. 
// Ensure deductions do not exceed the gross income. 
 
// Constraints: 
// Taxable income cannot be negative. If deductions exceed income, treat taxable income as ₹0. 
// Tax rates and slab limits may vary by the user's age category.
#include <stdio.h>
void main(){
    float grossIncome, deductions,tax=0;
    printf("Enter Gross Income and Deductions: ");
    scanf("%f %f",&grossIncome, &deductions);

    float taxableIncome = grossIncome - deductions;
    if (taxableIncome <= 250000) {
        tax = 0;
    } else if (taxableIncome > 250000 && taxableIncome <= 500000) {
        tax += (taxableIncome - 250000) * 0.05;
    } else if (taxableIncome > 500000 && taxableIncome <= 1000000) {
        tax += (500000 - 250000) * 0.05;
        tax += (taxableIncome - 500000) * 0.2;
    } else if (taxableIncome > 1000000) {
        tax += (500000 - 250000) * 0.05;              
        tax += (1000000 - 500000) * 0.2;              
        tax += (taxableIncome - 1000000) * 0.3;       
    }
    printf("Tax: %f",tax);
}