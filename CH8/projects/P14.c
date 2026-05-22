#include <stdio.h>

int main(void){
    int len = 0, wlen = 0;
    char sentence[99], terminator;

    printf("Enter a sentence: ");
    while ((terminator = getchar()) != '.' &&
           terminator != '!' &&
           terminator != '?'){
        sentence[len] = terminator;
        len++;
    }

    for (int i = len - 1; i >= 0; i--){
        if (sentence[i] == ' '){
            for (int j = 0; j < wlen; j++){
                putchar(sentence[i + j + 1]);
            }
            putchar(' ');
            wlen = 0;
        }
        else if (i == 0){
            for (int j = 0; j <= wlen; j++){
                putchar(sentence[j]);
            }
        }
        else {
            wlen++;
        }
    }
    putchar(terminator);

    putchar('\n');
    return 0;
}
