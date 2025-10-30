#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, col = 4;
    int **matrix;

    matrix = (int**) malloc(rows * sizeof(int*));

    for(int i=0; i<rows; i++) {
        matrix[i] = (int*) malloc(col * sizeof(int));
        
        if(matrix[i] == NULL) {
            for(int j=0; j<i; j++) {
                free(matrix[j]);
            }
            free(matrix);
        }
    }

    int value = 1;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<col; j++) {
            matrix[i][j] = value++;
        }
    }

    for(int i=0; i<rows; i++) {
        for(int j=0; j<col; j++) {
            printf("  %2d ", matrix[i][j]); 
        }
        printf("\n");
    }

    for(int i=0; i<rows; i++) {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}
