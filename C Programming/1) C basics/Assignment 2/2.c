#include<stdio.h>
int main ()
{
	char usrchrc;
	printf("Enter an alphabet ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&usrchrc);
	if (usrchrc == 'a'||usrchrc == 'o'||usrchrc == 'i'||usrchrc == 'e'||usrchrc == 'u')
	{
		printf("%c is a vowel",usrchrc);
	}
	else
		printf("%c is a consonant",usrchrc);
}
