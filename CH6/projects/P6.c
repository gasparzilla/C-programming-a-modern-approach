#include <stdio.h>

int main(void){
    // int n, x = 2;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // while(x*x <= n){
    //     printf("%d\n", x*x);
    //     x += 2;
    // }
    
    for (int i = 2; i*i <= n; i+=2){
        printf("%d\n", i*i);
    }

    return 0;
}
