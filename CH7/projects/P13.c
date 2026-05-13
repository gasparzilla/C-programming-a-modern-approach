#include <stdio.h>

int main(void){
    printf("Enter a sentence: ");
    float length = 0, amount = 1;
    float average = 0;
    char ch = getchar();

    while (ch != '\n'){
        if (ch == ' '){
            amount += 1.0f;
        }
        else {
            length += 1.0f;
        }
        ch = getchar();
    }
    average = length / amount;
    printf("Average word length: %.1f\n", average);

    return 0;
}
