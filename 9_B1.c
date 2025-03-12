// Write a program to read the marks of one subject of 20 students and computes the number of students in 
// categories FAIL, PASS, FIRST CLASS and DISTINCTION using array. 
#include <stdio.h>
void main(){
    int arr[20];
    int fail=0, pass=0, first=0, distinction=0;
    for(int i=0; i<20; i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<20; i++){
        if(arr[i] < 35) {
            fail++;
        }
        else if(arr[i] >= 35 && arr[i] < 60) {
            pass++;
        }
        else if(arr[i] >= 60 && arr[i] < 80) {
            first++;
        }
        else if(arr[i] >= 80) {
            distinction++;
        }
    }
    printf("Number of students in FAIL category: %d\n", fail);
    printf("Number of students in PASS category: %d\n", pass);
    printf("Number of students in FIRST CLASS category: %d\n", first);
    printf("Number of students in DISTINCTION category: %d\n", distinction);
}