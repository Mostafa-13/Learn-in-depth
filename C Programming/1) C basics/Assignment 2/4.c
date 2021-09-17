#include<stdio.h>
int main ()
{
	float n;
	printf ("Enter you number:");
	fflush(stdout);
	scanf ("%f",&n);

	if (n==0)
		printf("\nyou entered zero");
	else if (n>0)
		printf("\n%f is positive",n);
	else
		printf("\n%f is negative",n);
}
