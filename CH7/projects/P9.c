#include <stdio.h>
#include <ctype.h>

int main(void){
    int hours, minutes, mtm;
    char t0, t1;

    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d%c%c", &hours, &minutes, &t0, &t1);

    t0 = toupper(t0);
    t1 = toupper(t1);

    if ((t0 == 'P' || t1 == 'P') && hours != 12){
        hours += 12;
    }
    else if ((t0 == 'A' || t1 == 'A') && hours == 12){
        hours = 0;
    }
    printf("Equivalent 24-hour time: %.2d:%.2d\n", hours, minutes);
    
    return 0;
}
