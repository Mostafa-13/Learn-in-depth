#include <stdio.h>

int main()
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	printf("you entered: %d", num);
}
