#include <stdio.h>

int main(void){
    float loan, rate, payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("monthly payment: ");
    scanf("%f", &payment);

    balance = (loan-payment)+(loan*rate/1200.0f);
    printf("Balance remaining after first payment: %.2f\n", balance);
    balance = (balance-payment)+(balance*rate/1200.0f);
    printf("Balance remaining after second payment: %.2f\n", balance);
    balance = (balance-payment)+(balance*rate/1200.0f);
    printf("Balance remaining after third payment: %.2f\n", balance);
    
    return 1;
}