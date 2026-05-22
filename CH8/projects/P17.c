#include <stdio.h>

int main(void){
    int size;

    printf("This program creates a magic square of a specified size\n");
    printf("The size must be an odd number between 1 and 99\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int ms[size][size];
    int x = size * size, y = size / 2; 

    for (int i = 1; i <= size * size; i++){
        // printf("%3d %3d\n", x%size, y%size);
        ms[x % size][y % size] = i;
        if (i%size == 0){
            x = x + 1;
            }
        else {
            y = y + 1;
            x = x - 1;
            }
        }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%3d ", ms[i][j]);
        }
        printf("\n");
    }

    return 0;
}
