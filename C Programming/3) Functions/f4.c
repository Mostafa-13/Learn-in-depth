#include<stdio.h>
int result = 1;
int power(int num, int po)
{
	result *= num;
	po--;
	if (po > 0)
		power(num,po);
	return result;
}

int main()
{
	int num, po;
	printf("Enter base integer: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Enter power number (positive integer): ");
	fflush(stdout);
	scanf("%d",&po);
	printf("%d^%d = %d",num,po,power(num,po));
}
