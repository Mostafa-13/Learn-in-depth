#include<stdio.h>
int main()
{
	int n;
	printf("Enter your number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	if(n%2)
	{
		printf("\n%d is odd",n);
	}

	else
	{
		printf("\n%d is even",n);
	}
}
