// In boxing the weight, class of boxer is decided as per the following table. Write a program that receives 
// the weight as input and prints the boxer's weight class. 
// Boxer class Weight  | in pound 
// Flyweight                   | <115 
// Bantamweight           |  115-121 
// Featheweight            | 122-153 
// Middleweight            | 154-189 
// Heavyweight             | >=190
#include <stdio.h>
void main() {
    float weight;
    printf("Enter the weight of the boxer in pounds: ");
    scanf("%f", &weight);

    if (weight < 115) {
        printf("Flyweight");
    } else if (weight >= 115 && weight <= 121) {
        printf("Bantamweight");
    } else if (weight >= 122 && weight <= 153) {
        printf("Featherweight");
    } else if (weight >= 154 && weight <= 189) {
        printf("Middleweight");
    } else if (weight >= 190) {
        printf("Heavyweight");
    } else {
        printf("Invalid weight");  
    }
}
