#include<stdio.h>
int main ()
{
	char temp;
	printf ("Enter a character:");
	fflush(stdout);
	scanf("%c",&temp);

	if ((temp>64 && temp<91) || (temp>96 && temp<123)) // ASCII values
		printf("%c is an alphabet",temp);
	else
		printf("%c is not an alphabet",temp);
}
