#include <stdio.h>
#include <math.h>

int main() {
    float x;
    double sum = 0;
    printf("Enter your value: ");
    scanf("%f", &x);
    for (int i=1; i<=9; i++) {
        sum = sum + (1/i) * pow(((x-1)/x), i);
    }   

    printf("The natural logarithm of %.2f is %.3lf \n", x, sum);
    
    return 0;
}
