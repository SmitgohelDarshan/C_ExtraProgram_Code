// Write a menu driven program that allows user to enters five numbers and then choose between finding 
// the smallest, largest, sum or average. Use switch case to determine what action to take. Provide error 
// message if an invalid choice is entered. 
#include <stdio.h>
void main(){
    int choice, i, sum=0;
    float avg;
    printf("Enter 1. find smallest value\n");
    printf("Enter 2. find largest value\n");
    printf("Enter 3. find sum\n");
    printf("Enter 4. find average\n");

    scanf("%d",&choice);

    int arr[5];
    printf("Enter Five numbers:");
    for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
    }

    int min;
    int max;

    switch(choice){
        case 1:    min = arr[0];
                for(int j=0; j<5; j++){
                    min = (min < arr[j])?(min):(arr[j]);
            }
            printf("Smallest value: %d",min);
            break;

        case 2:     max = arr[0];
                for(int j=0; j<5; j++){
                    max = (max > arr[j])?(max):(arr[j]);
                }    
                printf("Largest value: %d",max);
                break;

        case 3:
                for(int j=0; j<5; j++){
                    sum += arr[j];
            }    
            printf("Sum: %d",sum);
            break;  

        case 4:
                for(int j=0; j<5; j++){
                    sum += arr[j];
            }    

            avg = (float)sum/5;
            printf("Average: %f",avg);
            break;   
    }

}