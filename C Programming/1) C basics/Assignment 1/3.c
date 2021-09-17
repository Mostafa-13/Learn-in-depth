#include <stdio.h>

int main()
{
	int num1, num2, sum;
	printf("Enter two Integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	printf("Sum = %d",sum);
}
