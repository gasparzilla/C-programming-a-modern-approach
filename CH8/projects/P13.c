#include <stdio.h>
#include <ctype.h>

int main(void){
    int ws_flag = 0, name_flag = 0, len = 0;
    printf("Enter a first and last name: ");
    char ch = getchar(), initial = ' ', last_name[20];
    
    while (ch != '\n'){
        if (ch == ' '){
            ws_flag = 1;
        }
        else {
            // initial whitespaces
            if (name_flag == 0){
                name_flag = 1;
                ws_flag = 0;
            }
            // next word
            else if (ws_flag == 1 && name_flag > 0){
                name_flag++;
                ws_flag = 0;
            }
            // name
            if (name_flag == 1){
                initial = ch;
                name_flag = 2;
            }
            // last name
            else if (name_flag == 3) {
                last_name[len] = ch;
                len++;
            }
        }
        ch = getchar();
    }
    for (int i = 0; i < len; i++){
        putchar(last_name[i]);
    }
    printf(", %c.\n",toupper(initial));

    return 0;
}   
