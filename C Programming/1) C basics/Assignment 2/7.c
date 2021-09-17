#include<stdio.h>
int main ()
{
	unsigned int n;
	double fact=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);

	if (n>0)
	{
		for(int i = n; i > 0 ; i--)
		{
			fact = fact * i;
		}
		printf("Factorial = %lf",fact);
	}

	else if (n == 0)
		printf("Factorial = 1");

	else
		printf("Error!! factorial of negative number doesn't exist");
}
