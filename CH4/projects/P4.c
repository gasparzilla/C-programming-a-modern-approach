#include <stdio.h>

int main(void){
    int dec, oct = 0, i = 1;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &dec);
    printf("%d-%d-%d\n", dec, oct, i);
    while (dec){
        oct += ( i * ( dec % 8 ));
        dec /= 8;
        i *= 10;
        printf("%d-%d-%d\n", dec, oct, i);
    }
    printf("In octal, your number is: %d\n", oct);
    return 0;
}
