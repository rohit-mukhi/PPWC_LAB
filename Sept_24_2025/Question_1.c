#include <stdio.h>

int main() {
    int size; 
    float sum = 0;
    
    printf("Enter number of numbers: ");
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = sum/size;
    int count = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] > average) {
            count++;
        }
    }

    printf("Number of values above average: %d\n", count);

    return 0;
}