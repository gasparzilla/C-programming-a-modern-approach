#include <stdio.h>

int main(void){
    int a, b;
    
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &a, &b);
    printf("The reversal is: %1d%1d\n", b, a);
    return 0;
}
