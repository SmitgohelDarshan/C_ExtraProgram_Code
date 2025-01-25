// Write a program called parking charge that, given the type of vehicle ('c' for car, 'b' for bus, 't' for truck) 
// and the hours a vehicle spent in the parking lot, returns the parking charge based on the rates shown 
// below a. car $2 per hour b. bus $3 per hour c. truck $4 per hour 
#include <stdio.h>
void main(){
    int charge, hours;
    char vehicle;
    printf("Enter which vehicle park.\n'c' for car, 'b' for bus, 't' for truck and parking hours: ");
    scanf("%c %d",&vehicle, &hours);
    if(vehicle == 'c') {
            charge = 2 * hours; 
            printf("Car parking charge: %d",charge); 
        } else if(vehicle == 'b') {
            charge = 3 * hours;
            printf("Bus parking charge: %d",charge); 
        } else if(vehicle == 't') {
            charge = 4 * hours;
            printf("Truck parking charge: %d",charge); 
        }

}