// Reversing a number by recursion

#include <stdio.h>

int reverse(int num, int rev) {
    if(num == 0) {
        return rev;
    } else {
        return reverse(num/10, rev*10+num%10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char a = getchar();
    int res = reverse(num, 0);
    printf("The reversed num is: %d\n", res);
    return 0;
}
