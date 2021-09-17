#include<stdio.h>

int i = 1;
int factorial(int num)
{
	i *= num;
	num--;
	if(num > 0)
	{
		factorial(num);
	}
	return i;
}

int main()
{
	int num;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&num);

	printf("Factorial of %d = %d",num,factorial(num));
}
