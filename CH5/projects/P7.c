#include <stdio.h>

int max(int a,int b,int c,int d){
    int x = a;
    if (x < b)
        x = b;
    if (x < c)
        x = c;
    if (x < d)
        x = d;
    return x;
}

int min(int a,int b,int c,int d){
    int x = a;
    if (x > b)
        x = b;
    if (x > c)
        x = c;
    if (x > d)
        x = d;
    return x;
}

int main(void){
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int max_value = max(a,b,c,d);
    int min_value = min(a,b,c,d);

    printf("Largest: %d\n", max_value);
    printf("Smallest: %d\n", min_value);

    return 0;
}
