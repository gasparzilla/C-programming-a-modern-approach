#include <stdio.h>

int main(void){
    float dollars, with_tax;

    printf("Enter an amount: $");
    scanf("%f", &dollars);

    with_tax = dollars * 1.05f;
    printf("With tax added: $%.2f\n", with_tax);
}