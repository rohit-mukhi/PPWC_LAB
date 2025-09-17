// This is a factorial program with recursion

#include <stdio.h>

int factorial(int val) {
    int fact = 1;
    if(val == 0) {
        return fact;
    } else {
        return (val * factorial(--val));
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact); 
    
    return 0;
}
