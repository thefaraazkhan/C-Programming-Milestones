// Program to convert Farenheit(F) to Celcius(C)
// Formula is (°F − 32) × 5/9 = °C
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in Farenheit(f): ");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("%.2f Farenheit(f) is %.2f Celcius(C)",f,c);

    return 0;
}
