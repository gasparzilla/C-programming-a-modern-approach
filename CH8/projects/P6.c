#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    char c, msg[50];
    int len = 0;

    printf("Enter a message: ");
    c = toupper(getchar());
    while (c != '\n'){
        msg[len] = c;
        len++;
        c = toupper(getchar());
    }
    
    printf("In B1FF-speak: ");
    for (int i = 0; i < len; i++){
        switch (msg[i]){
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(msg[i]);
        }
    }
    
    for(int ex = rand()%11; ex > 0; ex--){
        putchar('!');
    }
    
    putchar('\n');
    return 0;
}
