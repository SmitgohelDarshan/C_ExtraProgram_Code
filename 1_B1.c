// Input two numbers into two locations C and D. Write a program to interchange the contents of C and D. 
// (Without using 3rd Variable)
#include <stdio.h>
void main(){
    int C,D;
    printf("Enter two numbers:");
    scanf("%d %d",&C,&D);
    C = C+D;
    D = C-D;
    C = C-D;

    // C = C ^ D;   // Step 1: C holds the result of C XOR D
    // D = C ^ D;   // Step 2: D now holds the original value of C
    // C = C ^ D;   // Step 3: C now holds the original value of D
    printf("%d %d",C,D);
}