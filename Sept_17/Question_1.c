// Printing multiplication table using nested functions

#include <stdio.h>

int add(int n, int s) {
    return(n+s);
}

void multiplicationTable(int num) {
    int sum = 0, i;
    for(i=1; i<=10; i++) {
        sum = add(num, sum);
        printf("%2d x %2d = %2d\n", num, i, sum);
    }
}

int main() {
    int num; 
    int sum= 0;
    char c;
    printf("Enter a number: ");
    scanf("%d", &num);
    //while((c = getchar()) != '\n' || c != EOF)

    printf("The table of %d\n", num);
    multiplicationTable(num);
    
    return 0;
}
