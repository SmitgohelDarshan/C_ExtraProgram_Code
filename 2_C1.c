// Write a program that checks if the given year is leap year or not. 
#include <stdio.h>
void main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if((year %4 == 0 && year % 100 != 0) ||( year %400 ==0)){
        printf("Enter year is leap year.");
    }
}