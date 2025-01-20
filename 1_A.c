// Write a program that takes name, rollno and marks obtained by a student in 4 subjects of 100 marks each 
// and display the name, rollno with percentage score secured.
#include <stdio.h>
void main(){
    char name[30];
    int rollno, marks[4];
    int totalmarks = 0;
    float percentage;

    printf("Enter Name of student:");
    scanf("%s", name);
    printf("Enter Roll Number of student:");
    scanf("%d", &rollno);

    printf("Enter marks obtained in 4 subjects:");
    for (int i = 0; i < 4; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalmarks += marks[i];
    }

    percentage = (totalmarks / 4.0);

    printf("\nName: %s\n", name);
    printf("Roll Number: %d\n", rollno);
    printf("Percentage: %.2f%%", percentage);
}