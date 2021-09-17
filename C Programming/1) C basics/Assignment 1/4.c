#include <stdio.h>

int main()
{
	float n1 , n2, mltp;
	printf("Enter two floats: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &n1, &n2);

	mltp = n1 * n2;
	printf("The product = %f",mltp);
}
