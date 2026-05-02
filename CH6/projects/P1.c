#include <stdio.h>

int main(){
    float largest = 0.0f, user_input = 1.0f;

    while (user_input > 0){
        printf("Enter a number: ");
        scanf("%f", &user_input);
        if (user_input > largest){
            largest = user_input;
        }
    }
    printf("The largest number entered was %f\n", largest);
    return 0;
}
