#include <stdio.h>

void TowerOfHanoi(int n, int a, int b, int c) {
    if(n>0) {
        TowerOfHanoi(n-1, a, c, b);
        printf("Move a disc from %d to %d\n", a, c);
        TowerOfHanoi(n-1, b, a, c);
    }
}

int main() {
    int num;
    printf("Enter number of discs: ");
    scanf("%d", &num);
    TowerOfHanoi(num, 1, 2, 3);
    return 0;
}
