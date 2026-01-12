#include <stdio.h>

void show(int *arr1, int *arr2, int *arr, int size) {
    printf("%p %d %p %d\n", arr1, *arr1, arr2, *arr2);

    printf("%d\n", size);

    for(int i=0; i<size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {35, 143, 50};
    show(&arr[0], &arr[2], arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}
