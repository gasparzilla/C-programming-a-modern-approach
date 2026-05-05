#include <stdio.h>

int main(void){
    long i, n; // max n before overflow is 3037000499

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    getchar();

    for (i = 1; i<= n; i++){
        printf("%20ld%20ld\n", i, i*i);
        if (i%24 == 0){
            printf("Press ENTER to continue...\n");
            getchar();
        }
    }

    return 0;
}
