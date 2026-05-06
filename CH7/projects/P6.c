#include <stdio.h>

int main(void){
    printf("Printing the sizes of basic numeric types:\n\n");

    printf("size of int:         %10zd\n", sizeof(int));
    printf("size of short:       %10zd\n", sizeof(short));
    printf("size of long:        %10zd\n", sizeof(long));
    printf("size of float:       %10zd\n", sizeof(float));
    printf("size of double:      %10zd\n", sizeof(double));
    printf("size of long double: %10zd\n", sizeof(long double));

    return 0;
}
