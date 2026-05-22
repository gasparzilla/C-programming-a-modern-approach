#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void){
    srand((unsigned) time(NULL));
    char ch = 'A', matrix[SIZE][SIZE];
    
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            matrix[i][j] = '.';
        }
    }
    
    int x = 0, y = 0;
    matrix[x][y] = ch;
    for (int i = 1; i < 26; i++){
        ch = ch+1;
        int d = rand()%4;
        
        int v[4] = {0};
        if (y > 0 && matrix[x][y-1] == '.')
            v[0] = 1;
        if (x < SIZE - 1 && matrix[x+1][y] == '.')
            v[1] = 1;
        if (y < SIZE - 1 && matrix[x][y+1] == '.')
            v[2] = 1;
        if (x > 0 && matrix[x-1][y] == '.')
            v[3] = 1;

        if (v[0] == 0 && v[1] == 0 && v[2] == 0 && v[3] == 0)
            break;

        while(!v[d]){
            d = rand()%4;
        }

        switch (d){
            case 0:
                y = y-1;
                matrix[x][y] = ch;
                break;
            case 1:
                x = x+1;
                matrix[x][y] = ch;
                break;
            case 2:
                y = y+1;
                matrix[x][y] = ch;
                break;
            case 3:
                x = x-1;
                matrix[x][y] = ch;
                break;
        }
    }

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
