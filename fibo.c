// To find the fibonacci series till n
#include <stdio.h>

int main()
{
    int n,a,b,c;

    printf("\nEnter the Number of elements to find in series: ");
    scanf("%d",&n);
    printf("\nThe first %d element of fibonacci series are: ",n);
    a = 0;
    b = 1;
    printf("%d, %d",a,b);

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(", %d",c);
    }
    return 0;
}
