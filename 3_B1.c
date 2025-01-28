// Write a program to determine whether the character entered is a capital letter, a small case letter, a digit 
// or a special symbol. The following table shows the range of ASCII values for various characters. 
// Characters ASCII Values 
// A – Z 65 – 90 
// a – z 97 – 122 
// 0 – 9 48 – 57 
// Special symbols 0 - 47, 58 - 64, 91 - 96, 123 – 127
#include <stdio.h>
void main(){
    char character;
    printf("Enter character: ");
    scanf("%c",&character);
    if(character >= 65 && character <= 90)
        printf("Capital letter");
    else if(character >= 97 && character <= 122)
        printf("Small letter");
    else if(character >= 48 && character <= 57)
        printf("A digit");
    else if ((character >= 0 && character <= 47) || (character >= 58 && character <= 64) || (character >= 91 && character <= 96) || (character >= 123 && character <= 127)) {
        printf("Special symbol\n");
    }
    else
        printf("other character");
}