#include <stdio.h>

int main(void){
    float wind_speed;
    char description[] = "";

    printf("Enter the wind speed (in knots): ");
    scanf("%f", &wind_speed);

    if (wind_speed < 1.0f){
        printf("The find force is 'Calm'.\n");
    }
    else if (wind_speed < 4.0f){
        printf("The find force is 'Light air'.\n");
    }
    else if (wind_speed < 28.0f){
        printf("The find force is 'Breeze'.\n");
    }
    else if (wind_speed < 48.0f){
        printf("The find force is 'Gale'.\n");
    }
    else if (wind_speed < 63.0f){
        printf("The find force is 'Storm'.\n");
    }
    else{
        printf("The find force is 'Hurricane'.\n");
    }

    return 0;
}
