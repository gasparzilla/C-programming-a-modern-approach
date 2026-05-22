#include <stdio.h>

int main(void){
    int hours, minutes, mtm;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    mtm = 60*hours + minutes;

    int d_hours, d_minutes = 0, a_hours, a_minutes = 0;
    if (mtm < (((8*60) + (9*60+43)) / 2)){
        d_hours = 8;
        a_hours = 10; a_minutes = 16;
    }
    else if (mtm < (((9*60+43) + (11*60+19)) / 2)){
        d_hours = 9; d_minutes = 43;
        a_hours = 11; a_minutes = 52;
    }   
    else if (mtm < (((11*60+19) + (12*60+47)) / 2)){
        d_hours = 11; d_minutes = 19;
        a_hours = 13; a_minutes = 31;
    }
    else if (mtm < (((12*60+47) + (14*60)) / 2)){
        d_hours = 12; d_minutes = 47;
        a_hours = 3;
    }
    else if (mtm < (((14*60) + (15*60+45)) / 2)){
        d_hours = 14;
        a_hours = 16; a_minutes = 8;
    }
    else if (mtm < (((15*60+45) + (19*60)) / 2)){
        d_hours = 15; d_minutes = 45;
        a_hours = 17; a_minutes = 55;
    }
    else if (mtm < (((19*60) + (21*60+45)) / 2)){
        d_hours = 19;
        a_hours = 21; a_minutes = 20;
    }
    else {
        d_hours = 21; d_minutes = 45;
        a_hours = 23; a_minutes = 58;
    }

    if ((d_hours < 12) && (a_hours < 12)){
        printf("Closest departure time is %d:%.2d a.m, arriving at %d:%.2d a.m\n", d_hours, d_minutes, a_hours, a_minutes);
    }
    else if ((d_hours < 12) && (a_hours > 12)){
        printf("Closest departure time is %d:%.2d a.m, arriving at %d:%.2d p.m\n", d_hours, d_minutes, a_hours, a_minutes);
    }
    else {
        if (d_hours != 12)
            d_hours -= 12;
        printf("Closest departure time is %d:%.2d p.m, arriving at %d:%.2d p.m\n", d_hours, d_minutes, a_hours, a_minutes);
    }
    return 0;
}
