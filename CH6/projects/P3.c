#include <stdio.h>

int GCD(int i1, int i2){
    int h;
    while (i1 != 0){
        h = i1;
        i1 = i2%i1;
        i2 = h;
    }
    return i2;
}

int main(){
    int num, den, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);
    gcd = GCD(num, den);
    int num_2 = num/gcd, den_2 = den/gcd;
    printf("In lowest terms: %d/%d\n", num_2, den_2);
    return 0;
}
