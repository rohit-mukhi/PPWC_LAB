#include <stdio.h>
#include <ctype.h>

int main() {
    char ch, ch2;
    printf("Enter a charcater: ");
    scanf("%c", &ch);
    getchar();
    ch2 = ch;

    if(islower(ch)) {
        ch = toupper(ch);
        ch2 = toupper(ch2);
    }
    int k = 0, l=2;
    for(int i=ch; i>=65; i--) {
        for(int i=65; i<=ch-k; i++) {
            printf("%c ", i);
        }

        if(k == 0) {
            for(int i=ch-1; i>=65; i--) {
                printf("%c ", i);
            }   
        } else {
            if(k == 1) {
                for(int i=0; i<l; i++) {
                    printf(" ");
                }
                l = l+4;
            } else {
                for(int i=0; i<l; i++) {
                    printf(" ");
                }
                l = l+4;
            }

            for(int i=ch2-k; i>=65; i--) {
                printf("%c ", i);
            }  
        }

        k++;
        printf("\n");
    }
    return 0;
}
