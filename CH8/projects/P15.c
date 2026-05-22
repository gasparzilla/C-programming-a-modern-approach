#include <stdio.h>

int main(void){
    char ch, msg[80];
    int len = 0, shift = 0;

    printf("Enter message to be encrypted: ");
    while((ch = getchar()) != '\n'){
        msg[len] = ch;
        len++;
    }

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (int i = 0; i < len; i++){
        if (msg[i] >= 'a' && msg[i] <= 'z'){
            // msg[i] = ((msg[i] - 'a') + shift) % 26 + 'a';
            putchar(((msg[i] - 'a') + shift) % 26 + 'a');
        }
        else if (msg[i] >= 'A' && msg[i] <= 'Z'){
            // msg[i] = ((msg[i] - 'A') + shift) % 26 + 'A';
            putchar(((msg[i] - 'A') + shift) % 26 + 'A');
        }
        else{
            putchar(msg[i]);
        }
    }
    
    putchar('\n');
    return 0;
}
