#include <stdio.h>
#include <ctype.h>

int main(void){
    int alpha[26] = {0};
    char ch;

    printf("Enter the first word: ");
    while((ch = tolower(getchar())) != '\n'){
        if (isalpha(ch)){
            alpha[ch - 'a']++;
        }
    }

    printf("Enter the second word: ");
    while((ch = tolower(getchar())) != '\n'){
        if (isalpha(ch)){
            alpha[ch - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++){
        if (alpha[i] != 0){
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");
    return 0;
}
