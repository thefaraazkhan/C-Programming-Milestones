// Area of a Triangle
#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the base of Triangle in cm: ");
    scanf("%f",&b);
    printf("Enter the height of Triangle in cm: ");
    scanf("%f",&h);
    
    area = 0.5*b*h;
    printf("Area of the Triangle is %.2f sq cm",area);

    return 0;
}
