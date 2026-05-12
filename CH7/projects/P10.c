#include <stdio.h>
#include <ctype.h>

int main(void){
    int vowels = 0;

    printf("Enter a sentence: ");
    char ch = toupper(getchar());

    while (ch != '\n'){
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowels++;
        }
        ch = toupper(getchar());
    }
    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}
