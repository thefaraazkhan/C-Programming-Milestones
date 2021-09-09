// Area of a rectangle
#include<stdio.h>
int main()
{
    float l,w,area;
    printf("Enter the length of Rectangle in cm: ");
    scanf("%f",&l);
    printf("Enter the width of Rectangle in cm: ");
    scanf("%f",&w);

    area = l*w;
    printf("Area of the rectangle is %.2f sq cm",area);

    return 0;
}
