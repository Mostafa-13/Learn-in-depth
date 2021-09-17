#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int lnth;

	printf("Enter the string: ");
	fflush(stdout);
	gets(a);

	lnth = strlen(a);

	for(int i=0;i < lnth;++i)
	{
		b[lnth-i] = a[i];
	}
	b[lnth+1] = 0;
	printf("Reverse string is: %s",&b[1]);
}
