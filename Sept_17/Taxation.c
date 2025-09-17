// Simple program to showcase use of conditional statements

#include <stdio.h>

int main() {
    int age, discount;
    char c;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 18) {
        printf("Not eligible\n");
        return 0;
    } else if(age >= 18 && age <=30) {
        discount = 10;
    } else if (age >30 && age <=40) {
        discount = 20;
    } else if (age > 40) {
        discount = 40;
    }
    
    printf("Tax discount for age %d is %d%%\n", age, discount);

    return 0;
}
