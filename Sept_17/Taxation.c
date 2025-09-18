// Simple program to showcase use of conditional statements

#include <stdio.h>

int main() {
    int year, age, discount;
    char c;

    printf("Enter your birth year: ");
    scanf("%d", &year);

    age = 2025 - year;

    if (age <= 0) {
        printf("Invalid age\n");
    } else if(age < 18 && age > 0) {
        printf("Not eligible\n");
    } else if(age >= 18 && age <=30) {
        printf("Tax discount for age %d is 10%%\n", age);
    } else if (age >30 && age <=40) {
        printf("Tax discount for age %d is 20%%\n", age);
    } else if (age > 40) {
        printf("Tax discount for age %d is 30%%\n", age);    
    }
    
    return 0;
}
