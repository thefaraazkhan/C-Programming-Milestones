// Program to convert pound to kg
#include<stdio.h>
int main()
{
    float pound,kg;
    printf("Enter the weight in pounds: ");
    scanf("%f",&pound);
    kg = pound*0.45359237;
    printf("%.2f pounds is %.2f kg",pound,kg);

    return 0;
}
