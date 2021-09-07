// Area of Circle
#include<stdio.h>
int main()
{
    float area,radius;
    printf("Enter the radius of the circle in cm: ");
    scanf("%f",&radius);
    area = 3.141592*radius*radius;
    printf("A circle with a radius of %f has an area %f sq cm ",radius,area);

    return 0;
}