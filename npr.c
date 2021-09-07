// To find Permutation of a number nCr
#include <stdio.h>
int factorial(int);

int main()
{
    int n,permutation,a,r,fact;

    printf("\nEnter the value of n and r (nCr): ");
    scanf("%d %d",&n, &r);

    a = n - r; 
    fact = factorial(a);
    a = fact;

    fact = factorial(n);
    n = fact;

    permutation = n / a;
    printf("\n%d is the Permutation \n",permutation);
}

int factorial(int a)
{
    while(a > 1){
    int fact = a * factorial(a-1);
    return fact;
    }
}