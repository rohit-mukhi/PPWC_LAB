#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 10;
    int *ptr = &num;
    printf("%d\n", *ptr);

    int* val = (int*) malloc(sizeof(int));
    printf("%p\n", val);

    int* arr = (int*) calloc(7, sizeof(int));

    for(int i=0; i<7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(val);
    free(arr);
    return 0;
}
