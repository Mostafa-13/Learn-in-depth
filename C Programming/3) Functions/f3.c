#include<stdio.h>
#include<string.h>
void reverse(char arr[],int size)
{
	printf("%c",arr[size-1]);
	size--;
	if(size > 0)
	{
		reverse(arr,size);
	}
}

int main ()
{
	char arr[100];
	printf("Enter a sentence: ");
	fflush(stdout);
	gets(arr);
	reverse(arr,strlen(arr));
}
