#include <stdio.h>

int main(void){
    float income, tax = 0;

    printf("Enter the amount of taxable income: $");
    scanf("%f", &income);
    
    if (income < 750.0f)
        tax = income * 0.01f;
    else if (income < 2250.0f)
        tax = 7.5f + (income - 750.0f) * 0.02f;
    else if (income < 3750)
        tax = 37.5f + (income - 2250.0f) * 0.03f;
    else if (income < 5250)
        tax = 82.5f + (income - 3750.0f) * 0.04f;
    else if (income < 7000)
        tax = 142.5f + (income - 5250.0f) * 0.05f;
    else
        tax = 230.0f + (income - 7000.0f) * 0.06f;

    printf("Tax due: $%.2f\n", tax);

    return 0;
}
