// To find Factorial of a number
#include <stdio.h>
int factorial(int);

int main()
{
    int n,fact;

    printf("\nEnter the Number: ");
    scanf("%d",&n);

    fact = factorial(n);
    printf("%d is the factorial",fact);
    return 0;
}

int factorial(int a)
{
    while(a > 1){
    int fact = a * factorial(a-1);
    return fact;
    }
}