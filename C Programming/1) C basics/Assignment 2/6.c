#include<stdio.h>
int main ()
{
	int a, sum=0;
	printf("Enter your number: ");
	fflush(stdout);
	scanf("%d",&a);
	if (a>0)
	{
		for (int i=a ; i>0 ; i--)
		{
			sum+=i;

		}
		printf("The sum = %d",sum);
	}
	else
		printf("You entered a negative number");
}
