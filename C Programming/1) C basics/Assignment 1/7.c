#include <stdio.h>

int main ()
{
	int a, b;
	printf ("Enter the value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);

	printf ("Enter the value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);

	printf("\nAfter swapping, the value of a = %d\n",b);
	printf("After swapping, the value of b = %d",a);
}
