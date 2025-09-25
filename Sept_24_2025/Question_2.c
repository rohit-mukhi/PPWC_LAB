// Nested function can also be used, where just for checking if a charcater is vowel, separate function returning a value indicating true or false helps identify if a charcater is vowel.

#include <stdio.h>

void check(char ch) {
        if((ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            printf("%c is a vowel\n", ch);
            return;
        } else if((ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') && (ch != 'a' || ch != 'e' || ch != 'i' || ch != 'o' || ch != 'u' || ch != 'A' || ch != 'E' || ch != 'I' || ch != 'O' || ch != 'U')) {
            printf("%c is a consonant\n", ch);
            return;
        } else if(ch >= '0' && ch<='9') {
            printf("%c is a digit\n", ch);
            return;
        } else {
            printf("%c is a special charcater\n", ch);
            return;
        }
    
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    check(ch);
    return 0;
}
