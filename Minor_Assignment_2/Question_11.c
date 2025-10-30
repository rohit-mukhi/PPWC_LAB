#include <stdio.h>

int main() {
    int marks;
    char grade;
    
    printf("Enter marks out of 100: ");
    scanf("%d", &marks);

    int key = marks / 10;

    switch (key)
    {
    case 10:
        grade = 'O';
        break;
    case 9:
        if(marks >= 95) {
            grade = 'O';
        } else {
            grade = 'A';
        }
        break;

    case 8:
        if (marks >= 81) {
            grade = 'A';
        } else {
            grade = 'B';
        }
        break;

    case 7:
        if(marks >= 71) {
            grade = 'B';
        } else {
            grade = 'C';
        }
        break;

    case 6:
        if(marks >= 61) {
            grade = 'C';
        } else {
            grade = 'D';
        }
    
    case 5:
        if(marks >= 51) {
            grade = 'D';
        } else {
            grade = 'E';
        }
        break;

    case 4:
        if(marks >= 41) {
            grade = 'E';
        } else {
            grade = 'F';
        }
        break;
    default:
        printf("Something went wrong!\n");
        return 1;
        break;
    }

    printf("Your grade: %c \n", grade);
    
    return 0;
}
