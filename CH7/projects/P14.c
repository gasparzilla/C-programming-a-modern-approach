#include <stdio.h>
#include <math.h>

int main(){
    float x, xoy, sqrt = 1.0f, y = 0.0f;
    printf("Enter a positive number: ");
    scanf("%f", &x);

    while (fabs(y - sqrt) > fabs(0.00001f * y) ){
        y = sqrt;
        xoy = x / y;
        sqrt = (y + xoy) / 2.0f;
    }

    printf("Square root: %.5f\n", sqrt);

    return 0;
}
