// Program to print tables without using multiplication
#include <stdio.h>

int add(int n) {
    return (n);
}

int multiply(int n, int i) {
    int j;
    int sum = 0;
    for(j=1; j<=i; j++) {
        sum = sum + add(n);
    }
    return sum;
}

int main() {
    int num; 
    int sum= 0;
    char c;
    printf("Enter a number: ");
    scanf("%d", &num);
    //while((c = getchar()) != '\n' || c != EOF)

    printf("The table of %d\n", num);
    int i;
    for(i=1; i<=10; i++) {
        sum = multiply(num, i);
        printf("%2d x %2d = %2d\n", num, i, sum);
    }
    
    return 0;
}
