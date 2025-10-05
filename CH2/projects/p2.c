#include <stdio.h>
#define PI 3.1415926f
// using an int fraction
// #define SPHERE_RATIO=(4/3)
#define SPHERE_RATIO (4.0f/3.0f)

int main(void){
    float radius, volume;

    printf("Enter the radius of a sphere: ");
    scanf("%f", &radius);

    volume = SPHERE_RATIO*PI*radius*radius;
    printf("Volume of the sphere: %.2f\n", volume);
}