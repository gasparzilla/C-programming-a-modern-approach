#include <stdio.h>

int main(void){
    int x, factorial = 1;
    printf("Enter a positive value: ");
    scanf("%d", &x);
    printf("factorial of %d: ", x);

    while(x > 0){
        factorial = factorial * x;
        x--;
    }
    printf("%d\n", factorial);

    return 0;
}
