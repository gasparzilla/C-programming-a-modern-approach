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

// E5
int num_digits(int n){
    int digits = 0;
    while (n > 0){
        digits++;
        n = n % 10;
    }
    return digits;
}

// E6
int digit(int n, int k){
    int d = 0;
    while (k > 1){
        k--;
        n = n / 10;
    }
    return n % 10;
}

// E7
int largest_element(int[])

int main(void){
    printf("date 1: %d\n", day_of_year(1, 1, 1996));
    printf("date 2: %d\n", day_of_year(12, 31, 1996));
    printf("date 3: %d\n", day_of_year(12, 31, 2000));
    printf("date 4: %d\n", day_of_year(12, 31, 2001));

    printf("digit 1: %d\n", digit(123456789, 1));
    printf("digit 1: %d\n", digit(123456789, 3));
    printf("digit 1: %d\n", digit(123456789, 5));
    printf("digit 1: %d\n", digit(123456789, 9));
    printf("digit 1: %d\n", digit(123456789, 12));
    return 0;
}
