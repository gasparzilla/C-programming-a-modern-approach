#include <stdio.h>

int main(void){
    int sum_1, sum_2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, total;

    printf("enter the first twelve digit of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &sum_1, &sum_2, &i3, &i4, &i5, &i6, &i7, &i8 ,&i9, &i10, &i11, &i12);
    sum_1 += i3 + i5 + i7 + i9 + i11;
    sum_2 += i4 + i6 + i8 + i10 + i12;
    total = 9 - ((((3 * sum_2) + sum_1) - 1) % 10);
    printf("Check digit: %d\n", total);

    return 0;
}
