// Program to convert Inches to cm
#include<stdio.h>
int main()
{
    float cm,inch;
    printf("Enter the Length in Inches: ");
    scanf("%f",&inch);
    cm = inch*2.54;
    printf("%.2f inch is %.2f cm",inch,cm);

    return 0;
}
