#include <stdio.h>

int main(void){
    int n;
    float e = 1.0f, factorial = 1.0f;

    printf("Enter the number of iterations to calculate 'e': ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        factorial *= i;
        e = e + 1.0f/factorial;
    }

    printf("After %d iterations, 'e' is approximately %.10f\n", n, e);
    return 0;
}
