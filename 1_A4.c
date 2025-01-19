// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (do 
// not use a loop) 
#include <stdio.h>
void main(){
    int sum=0,num,temp,temp1,temp2,temp3,temp4;
    printf("Enter a five-digit number: ");
    scanf("%d",&num);
    temp = num%10;
    sum += temp;
    num/=10;
    temp1 = num%10;
    sum+=temp1;
    num/=10;
    temp2 = num%10;
    sum+=temp2;
    num/=10;
    temp3 = num%10;
    sum+=temp3;
    num/=10;
    temp4 = num%10;
    sum+=temp4;
    printf("%d",sum);

}