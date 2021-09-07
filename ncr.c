// To find Combinations of a number nCr
#include <stdio.h>
int factorial(int);

int main()
{
   int n,r,a,combination,fact;

    printf("\nEnter the value of n and r (nCr): ");
    scanf("%d %d",&n, &r);

    a = n - r; 
    fact = factorial(a);
    a = fact;

    fact = factorial(n);
    n = fact;

    fact = factorial(r);
    r = fact;

    combination = n / (r * a);
    printf("\n%d is the Combination \n",combination);
    
    return 0;
}

int factorial(int a)
{
    while(a > 1){
    int fact = a * factorial(a-1);
    return fact;
    }
}