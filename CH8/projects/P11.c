#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch, phone[15];
    int len = 0;

	printf("Enter a character: ");
	while((ch = getchar()) != '\n'){
        phone[len] = toupper(ch);
        len++;
    }

    printf("In numeric form: ");
	for(int i = 0; i < len; i++) {
    	switch (phone[i]){
        	case 'A': case 'B': case 'C':
        		putchar('2');
        		break;
        	case 'D': case 'E': case 'F':
        		putchar('3');
        		break;
        	case 'G': case 'H': case 'I':
        		putchar('4');
        		break;
        	case 'J': case 'K': case 'L':
        		putchar('5');
        		break;
        	case 'M': case 'N': case 'O':
        		putchar('6');
        		break;
        	case 'P': case 'Q': case 'R': case 'S':
        		putchar('7');
        		break;
       		case 'T': case 'U': case 'V':
       		 	putchar('8');
       		 	break;
       		case 'W': case 'X': case 'Y':
          		putchar('9');
          		break;
          	}
        if (phone[i] < 'A'){
            putchar(phone[i]);
        }
	}
	
    putchar('\n');
    return 0;
}
