// The current year and the year in which the employee joined the organization are entered through the 
// keyboard. If the number of years for which the employee has served the organization is greater than 3 
// then a bonus of Rs. 2500/- is given to the employee. If the years of service are not greater than 3, then 
// the program should do nothing. 
#include <stdio.h>
void main(){
    int currentYear, year;
    printf("Enter Current Year and Year in which employee joined the organization: ");
    scanf("%d %d",&currentYear, &year);
    int difference = currentYear - year;
    if(difference>3){
        printf("bonus of Rs. 2500/- is given to the employee");
    }
}