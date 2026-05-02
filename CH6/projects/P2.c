#include <stdio.h>

int main(){
    int i1, i2, h;
    printf("Enter two integers: ");
    scanf("%d %d", &i1, &i2);
    while (i1 != 0){
        h = i1;
        i1 = i2%i1;
        i2 = h;
    }
    printf("Greatest Common Divisor: %d\n", i2);

    return 0;
}
