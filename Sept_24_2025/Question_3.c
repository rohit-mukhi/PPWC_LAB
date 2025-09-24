#include <stdio.h>

int main() {
    char ch = 'y';
    int arr[100], idx=0;
    while(ch == 'y') {
        printf("Enter a number: ");
        scanf("%d", &arr[idx]);
        idx++;
        char c = getchar();
        printf("Do you want to enter another number? (y/n): ");
        scanf("%c", &ch);
        char d = getchar();
        if(ch != 'y') {
            printf("Your negative evens are: ");
            break;
        }
    }

    for(int i=0; i<=idx; i++) {
        if(arr[i] < 0 && arr[i]%2==0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
