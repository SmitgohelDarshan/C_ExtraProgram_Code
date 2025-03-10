// Twenty-five numbers are entered from the keyboard into an array. Write a program to find out how many 
// of them are positive, negative, even and odd.
#include <stdio.h>
void main(){
    int arr[25], positive=0, negative=0, even=0, odd=0;
    printf("Enter 25 numbers:");

    for(int i=0; i<25; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<25; i++){
        if(arr[i] > 0)  positive++;
        else if(arr[i] < 0) negative++;
        
        if(arr[i] %2 ==0) even++;
        else  odd++;
    }

    printf("Positive Number: %d, Negative Number: %d, even Number: %d, Odd Number: %d", positive, negative, odd, even);
}