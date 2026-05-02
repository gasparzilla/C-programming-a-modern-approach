#include <stdio.h>

int main(void){
    int i = 1;
    float epsilon, delta = 1.0f, e = 1.0f, factorial = 1.0f;

    printf("Enter the precision to calculate 'e': ");
    scanf("%f", &epsilon);

    while(delta > epsilon){
        factorial *= i;
        delta = 1.0f/factorial;
        // printf("%f\n", delta);
        e += delta;
        i++;
    }

    printf("for a precision of %f, 'e' is approximately %.10f\n", epsilon ,e);
    return 0;
}
