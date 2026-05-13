#include <stdio.h>
#include <ctype.h>

int main (void){
    float a, b;
    printf("Enter an expression: ");
    scanf("%f", &a);
    char ch = getchar();

    while (ch != '\n'){
        scanf("%f", &b);
        switch(ch){
            case '+':
                a = a+b;
                break;
            case '*':
                a = a*b;
                break;
            case '/':
                a = a/b;
                break;
            case '-':
                a = a-b;
                break;
        }
        ch = getchar();
    }

    printf("Value of expression: %.2f\n", a);
    return 0;
}
