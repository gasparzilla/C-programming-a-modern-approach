#include <stdio.h>

#define MATRIX_SIZE 5

int main(void){
    int matrix[MATRIX_SIZE][MATRIX_SIZE];

    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
    }

    int row[MATRIX_SIZE] = {0}, column[MATRIX_SIZE] = {0};
    for (int i = 0; i < MATRIX_SIZE; i++){
        for (int j = 0; j < MATRIX_SIZE; j++){
            row[i] += matrix[i][j];
            column[j] += matrix[i][j];
        }
    }
    
    printf("\nRow totals: ");
    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("%3d",row[i]);
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("%3d",column[i]);
    }

    printf("\n");
    return 0;
}
