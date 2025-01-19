// Write a program to calculate simple and compound interest. S.I. = (P × R × T)/100, CI = P (1 + r/n)nt - P
#include <stdio.h>
#include <math.h>  

void main() {
    float p, r, t, SI, CI, n; 
    printf("Enter Principal: ");
    scanf("%f", &p);
    printf("Enter Rate of Interest in percentage: ");
    scanf("%f", &r);
    printf("Enter Time in years: ");
    scanf("%f", &t);
    printf("Enter Number of times interest applied per year: ");
    scanf("%f", &n);

    SI = (p * r * t) / 100;
    printf("Simple Interest: %.2f\n", SI);

    CI = p * pow((1 + r / (n * 100)), n * t) - p; 
    printf("Compound Interest: %.2f", CI);
}
