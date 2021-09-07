// Program to calculate Simple Interest
#include<stdio.h>
int main()
{
    int principal,rate,time,SI;
    printf("Enter Principal, Rate of interest, Time of years");
    scanf("%d%d%d",&principal,&rate,&time);
    SI=(principal*rate*time)/100;
    printf("Simple Interest is %d",SI);
   
    return 0;
}
