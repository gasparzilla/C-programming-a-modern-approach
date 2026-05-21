#include <stdio.h>
#include <stdbool.h> // C99 only

int main(void){
    int digit_seen[10] = {0};
    bool flag = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n%10;
        digit_seen[digit] += 1;
        if (digit_seen[digit] > 1){
            flag = true;
        }
        n /= 10;
    }
    printf("Digit:      ");
    for (int i = 0; i < 10; i++){
        printf("%4d ", i);
    }
    printf("\nOcurrences: ");
    for (int i = 0; i < 10; i++){
        printf("%4d ", digit_seen[i]);
    }

    printf("\n");
    return 0;
}

