#include <stdio.h>
#include <stdbool.h>
// E1
// - added type to height
// - moved product definition inside function
double triangle_area(double base, double height){
    double product;
    product = base * height;
    return product / 2;
}

// E2
bool check(int x, int y, int n){
    if (x < n && y < n && x > 0 && y > 0){
        return 1;
    }
    else{
        return 0;
    }
}

// E3
int gcd(int i1, int i2){
    int h;

    while (i1 != 0){
        h = i1;
        i1 = i2 % i1;
        i2 = h;
    }

    return i2;
}

// E4

int day_of_year(int month, int day, int year){
    int n_day = day, feb_days = 28;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ){
        feb_days = 29;
    }

    int months_days[12] = {31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for (int i = 0; i < (month - 1); i++){
        n_day += months_days[i];
    }

    return n_day;
}

int main(void){
    printf("%d\n", day_of_year(1, 1, 1996));
    printf("%d\n", day_of_year(12, 31, 1996));
    printf("%d\n", day_of_year(12, 31, 2000));
    printf("%d\n", day_of_year(12, 31, 2001));
    return 0;
}
