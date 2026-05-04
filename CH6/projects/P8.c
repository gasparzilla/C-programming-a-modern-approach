#include <stdio.h>

int main(void){
    int days, start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun ... 7=Sat): ");
    scanf("%d", &start);

    // print empty spaces at begining
    for (int i = 0; i < start-1; i++){
        printf("   ");
    }

    // print days
    for (int i = start; i < days+start; i++){
        if ((i-1)%7 == 0) {
            printf("\n");
        }
        printf("%3d", i-start+1);
    }
    
    printf("\n");

    return 0;
}
