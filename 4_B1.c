// Write a program using conditional operators to determine whether a year entered through the keyboard is 
// a leap year or not. 
#include <stdio.h>
void main(){
    int year;
    printf("Enter Current Year: ");
    scanf("%d",&year);
    (year % 4==0)?((year % 100 != 0)?(printf("Leap Year")):(printf("Not Leap Year"))):((year % 400 ==0)?(printf("Leap year")):(printf("Not Leap year")));
}