#include <stdio.h>

int main(void){
    // int i, n; // max n before overflow is 46340
    //short i, n; // max n before overflow is 181
    long i, n; // max n before overflow is 3037000499

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    // scanf("%d", &n);
    //scanf("%hd", &n);
    scanf("%ld", &n);

    for (i = 1; i<= n; i++){
        // printf("%15d%15d\n", i, i*i);
        // printf("%8hd%8hd\n", i, i*i);
    }

    // Takes too long to finish for long
    printf("%20ld%20ld\n", n, n*n);

    return 0;
}
