// Function for finding LCM of 3 number
#include <stdio.h>
#include <math.h>

int lcm(int,int);

int main()
{
    int n1,n2,n3,a,b;

    printf("\nEnter the 3 Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1<n2)
    	a =	lcm(n1,n2);
    else
    	a = lcm(n2,n1); // We find lcm of first 2 number = a
	// printf("LCM of %d and %d is  %d",n1,n2,a);

	if(a<n3)
		b = lcm(a,n3);
	else
		b = lcm(n3,a); // Then we find lcm of a and third no. to get lcm of all 3 nos.
	
	printf("LCM of %d %d and %d is equal to %d",n1, n2, n3, b);

return 0;
}

// Logic for Calculating LCM of 2 numbers

int lcm(int x,int y){
	int temp = x;
	while(1)
	{
		if (temp % x == 0 && temp % y == 0)
		break;
	temp++;
	}
return temp;
}
