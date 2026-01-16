#include <stdio.h>

int main(void){
    int x, a, b;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    a = x / 10;
    b = x % 10;
    printf("The reversal is: %d%d\n", b, a);
    return 0;
}
