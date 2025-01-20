//If length of three side’s triangle are inputted through the keyboard, write a program to find area of triangle. 
#include <stdio.h>
#include <math.h> 
void main(){
    float a,b,c,s,area;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    s = (a + b + c) / 2;
    area = sqrt(s*(s - a)*(s - b)*(s - c));

    printf("The area of the triangle is: %.2f",area);
}