#include <stdio.h>

int main(void){
    float loan, rate, payment, balance;
    int n_payments;
        
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("monthly payment: ");
    scanf("%f", &payment);
    printf("number of payments: ");
    scanf("%d", &n_payments);

    balance = loan;

    for (int i = 0; i < n_payments; i++){
        balance = (balance-payment)+(balance*rate/1200.0f);
        printf("Balance remaining after payment number %3d: %.2f\n", i+1, balance);
        if (balance < 0){
            break;
        }
    }
    return 0;
}
