#include <stdio.h>

int main(void){
    int month_1, day_1, year_1;
    int month_2, day_2, year_2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_1, &day_1, &year_1);

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_2, &day_2, &year_2);

    while (month_2 != 0 && day_2 != 0 && year_2 != 0){
        
        if ((year_1 == year_2)&&(month_1 == month_2)&&(day_1 == day_2)){
            ;
        }
        else if ((year_1 == year_2)&&(month_1 == month_2)&&(day_1 < day_2) ||
                 (year_1 == year_2)&&(month_1 < month_2) ||
                 (year_1 < year_2)){
            ;
        }
        else {
            month_1 = month_2;
            day_1 = day_2;
            year_1 = year_2;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month_2, &day_2, &year_2);
    }

    printf("%02d/%02d/%02d is the earliest date\n", month_1, day_1, year_1);

    return 0;
}
