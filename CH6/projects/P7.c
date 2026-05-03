#include <stdio.h>

int main(void){
    int square = 1, odd = 3, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in table: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        printf("%10d%10d\n", i, square);
        square += odd;
        odd += 2;
    }
        
    return 0;
}
