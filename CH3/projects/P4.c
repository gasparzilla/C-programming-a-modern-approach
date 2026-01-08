#include <stdio.h>

int main(){
    int prefix, zone, number;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &prefix, &zone, &number);

    printf("You entered %d.%d.%d\n", prefix, zone, number);
    return 0;
}
