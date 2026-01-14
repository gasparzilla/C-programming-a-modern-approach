#include <stdio.h>

int main(void){
    int i1, i2, i3, i4, i5, sum_1, sum_2, total;

    printf("enter the first single digit: ");
    scanf("%1d", &sum_1);
    printf("enter the five digits corresponding to the manufacturer: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    sum_1 = sum_1 + i2 + i4;
    sum_2 = i1 + i3 + i5;
    printf("enter the five digits corresponding to the product: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    sum_1 = sum_1 + i1 + i3 + i5;
    sum_2 = sum_2 + i2 + i4;
    total = 9 - ((((3 * sum_1) + sum_2) - 1) % 10);
    
    printf("Check digit: %d\n", total);

    return 0;
}
