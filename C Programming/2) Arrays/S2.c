#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i=0;

	printf("Enter a string: ");
	fflush(stdout);
	gets(a);

	while(a[i] != 0)
	{
		i++;
	}
	printf("Length of string = %d",i);
}
