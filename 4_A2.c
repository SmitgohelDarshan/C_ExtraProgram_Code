// The body mass index is defined as ratio of the weight of a person to the square of the height. Write a 
// program that receives weight and height, calculate the BMI, and reports the BMI category as per the 
// following table: 
// BMI category |  BMI 
// Starvation      | <15 
// Anorexic         | 15.1 – 17.5 
// Underweight  | 17.6 – 18.5 
// Ideal               | 18.6 – 24.9 
// Overweight    | 25 – 25.9 
// Obese            | 30 – 30.9 
// Morbidly obese | >=40 
#include <stdio.h>
void main(){
    float height, weight, bmi;
    printf("Enter height and weight for BMI: ");
    scanf("%f %f",&height, &weight);

    bmi = weight / (height*height);

    if(bmi < 15)
        printf("Starvation");
    else if(bmi >=15.1 && bmi <=17.5)
        printf("Anorexic");
    else if(bmi >=17.6 && bmi <=18.5)
        printf("Underweight");
    else if(bmi >=18.6 && bmi <=24.9)
        printf("Ideal");
    else if(bmi >=25 && bmi <=25.9)
        printf("Overweight");
    else if(bmi >=30 && bmi <=30.9)
        printf("Obese");
    else if(bmi >=40)
        printf("Morbidly obese");
}