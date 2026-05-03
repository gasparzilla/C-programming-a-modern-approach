#include <stdio.h>

int main(void){
    int x, a, b;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The reversal is: \n");
    while (x>0){
        printf("%d", x % 10);
        x = x / 10;
    }
    printf("\n");
    return 0;
}
