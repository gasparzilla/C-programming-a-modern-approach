#include <stdio.h>

int main(void){
    int month_1, day_1, year_1;
    int month_2, day_2, year_2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_1, &day_1, &year_1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_2, &day_2, &year_2);
    
    if ((year_1 == year_2)&&(month_1 == month_2)&&(day_1 == day_2)){
        printf("%.2d/%.2d/%.2d is the same as %.2d/%.2d/%.2d\n", month_1, day_1, year_1, month_2, day_2, year_2);
    }
    else if ((year_1 == year_2)&&(month_1 == month_2)&&(day_1 < day_2) ||
             (year_1 == year_2)&&(month_1 < month_2) ||
             (year_1 < year_2)){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month_1, day_1, year_1, month_2, day_2, year_2);
    }
    else {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month_2, day_2, year_2, month_1, day_1, year_1);
    }
    return 0;
}
