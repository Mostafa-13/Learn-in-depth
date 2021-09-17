#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],chr;
	int frq = 0, lnth;

	printf("Enter a string: ");
	fflush(stdout);
	gets(a);

	printf("Enter your character to find frequency: ");
	fflush(stdout);
	scanf("%c",&chr);

	lnth = strlen(a);
	for(int i = 0; i < lnth; ++i)
	{
		if(chr == a[i])
			frq++;
	}
	printf("Frequency of %c = %d",chr,frq);
}
