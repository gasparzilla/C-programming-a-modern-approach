#include <stdio.h>

int main(void){
    int number, digits = 0;

    printf("Enter a number:");
    scanf("%d", &number);
    
    int mem = number;

    while (mem > 0) {
        digits += 1;
        mem = mem / 10;
    }

    printf("The number %d has %d digits\n", number, digits);
}
