#include <stdio.h>

int main(void){
    int hours, minutes, mtm;
    int d_schedule[8] = {8*60,
                         9*60+43,
                         11*60+19,
                         12*60+47,
                         14*60,
                         15*60+45,
                         19*60,
                         21*60+45};
    int a_schedule[8] = {10*60+16,
                         11*60+52,
                         13*60+31,
                         15*60,
                         16*60+8,
                         17*60+55,
                         21*60+20,
                         23*60+58};

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    mtm = 60*hours + minutes;

    int d_hours = d_schedule[7] / 60,
        d_minutes = d_schedule[7] % 60,
        a_hours = a_schedule[7] / 60,
        a_minutes = a_schedule[7] % 60;

    for (int i = 0; i < 7; i++){
        if (mtm < ((d_schedule[i] + d_schedule[i+1]) / 2)){
            d_hours = d_schedule[i] / 60;
            d_minutes = d_schedule[i] % 60;
            a_hours = a_schedule[i] / 60;
            a_minutes = a_schedule[i] % 60;
            break;
        }
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
