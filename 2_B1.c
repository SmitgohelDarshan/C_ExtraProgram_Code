// Write a program to compute x for given y 
// y=3x+5 if x<=10 
// y=8x+5 if x>10
#include <stdio.h>
void main(){
    int x,y;
    scanf("%d",&x);
    if(x<=10){
        y=(3*x)+5;
        printf("Y: %d",y);
    }
    if(x>10){
        y=(8*x)+5;
        printf("Y: %d",y);
    }
}