#include <stdio.h>

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(void){
    int a[10], n;
    printf("Enter up to 10 numbers: ");
    for (int i = 0; i < SIZE; i++){
        scanf(" %d", &a[i]);
    }

    printf("In reverse order:");
    for (int i = SIZE; i > 0; i--){
        printf(" %d", a[i-1]);
    }

    printf("\n");
    return 0;
}
