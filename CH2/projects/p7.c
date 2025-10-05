#include <stdio.h>

int main(void){
    int dollars, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    twenties = (dollars/20);
    dollars = dollars - twenties*20;
    printf("$20 bills: %d\n", twenties);
    tens = (dollars/10);
    dollars = dollars - tens*10;
    printf("$10 bills: %d\n", tens);
    fives = (dollars/5);
    dollars = dollars - fives*5;
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", dollars);
    return 1;
}