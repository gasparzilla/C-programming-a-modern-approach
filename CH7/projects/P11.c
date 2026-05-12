#include <stdio.h>
#include <ctype.h>

int main(void){
    int ws_flag = 0, name_flag = 0;
    printf("Enter a first and last name: ");
    char ch = getchar(), initial = ' ';
    
    while (ch != '\n'){
        if (ch == ' '){
            ws_flag = 1;
        }
        else {
            if (name_flag == 0){
                name_flag = 1;
                ws_flag = 0;
            }
            else if (ws_flag == 1 && name_flag > 0){
                name_flag++;
                ws_flag = 0;
            }

            if (name_flag == 1){
                initial = ch;
                name_flag = 2;
            }
            else if (name_flag == 3) {
                printf("%c", ch);
            }
        }
        ch = getchar();
    }
    printf(", %c.\n",toupper(initial));

    return 0;
}   
