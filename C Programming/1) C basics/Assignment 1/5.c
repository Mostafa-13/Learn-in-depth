#include <stdio.h>

int main()
{
	char chrc;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&chrc);
	printf("The ASCII value of %c is: %d",chrc,chrc);
}
