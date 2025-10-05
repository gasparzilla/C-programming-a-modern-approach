#include <stdio.h>

int main(void){
    int x, p;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    // p = (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
    p = (((((3*x)+2)*x-5)*x-1)*x+7)*x-6;
    printf("Polinomial: %d\n", p);
    return 1;
}