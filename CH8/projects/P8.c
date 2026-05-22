#include <stdio.h>

#define MATRIX_SIZE 5

int main(void){
    int matrix[MATRIX_SIZE][MATRIX_SIZE];

    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("Grades for student %d: ", i+1);
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
    }

    int row[MATRIX_SIZE] = {0}, 
        column[MATRIX_SIZE] = {0}, 
        max[MATRIX_SIZE] = {0}, 
        min[MATRIX_SIZE] = {0};

    for (int i = 0; i < MATRIX_SIZE; i++){
        for (int j = 0; j < MATRIX_SIZE; j++){
            row[i] += matrix[i][j];
            column[j] += matrix[i][j];
            if (max[j] < matrix[i][j]){
                max[j] = matrix[i][j];
            }
            if (min[j] > matrix[i][j] || min[j] == 0){
                min[j] = matrix[i][j];
            }
        }
    }
    
    printf("\nStudent averages: ");
    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("%5.1f",(float) row[i] / 5.0f);
    }

    printf("\nTest averages:    ");
    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("%5.1f", (float) column[i] / 5.0f);
    }

    printf("\nTest high scores: ");
    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("%5d",max[i]);
    }

    printf("\nTest low scores:  ");
    for (int i = 0; i < MATRIX_SIZE; i++){
        printf("%5d",min[i]);
    }

    printf("\n");
    return 0;
}
