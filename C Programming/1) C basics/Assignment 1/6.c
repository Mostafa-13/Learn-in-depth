#include <stdio.h>

int main ()
{
	float a, b, intrmdt;
	printf ("Enter the value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);

	printf ("Enter the value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	intrmdt = a;
	a = b;
	b = intrmdt;

	printf("\nAfter swapping, the value of a = %f\n",a);
	printf("After swapping, the value of b = %f",b);
}
