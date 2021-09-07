// Array with functions
#include<stdio.h>
int SumOfElements( int A[], int size)
{
    int i, sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {100,150,250};
    int size = sizeof(A)/sizeof(A[0]);

    int total = SumOfElements(A,size);
    printf("Sum of all elements in array is %d \n", total);
    return 0;
}