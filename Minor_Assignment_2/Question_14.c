#include <stdio.h>

int main() {
    int num;
    printf("Enter a number > ");
    scanf("%d", &num);
    
    printf("+------------------------------------------+\n");
    printf("| ");
    for(int i=1; i<=10; i++) {
        printf("%3d ", (num*i));
    }
    printf(" |\n| ");
    for(int i=1; i<=10; i++) {
        printf("%3d ", i);
    }
    printf(" |\n| ");
     for(int i=1; i<=10; i++) {
        printf("%3d ", num);
    }
    printf(" |\n");
    printf("+------------------------------------------+\n");
    return 0;
}
