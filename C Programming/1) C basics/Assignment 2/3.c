#include <stdio.h>
int main()
{
	float a, b, c;
	printf("Enter three numbers");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a ,&b ,&c);

	if (a>b)
	{
		if (a>c)
		{
			printf("the biggest number is %f",a);
		}
		else if (c>a)
		{
			printf("the biggest number is %f",c);
		}
	}
	else if (b>a)
	{
		if (b>c)
		{
			printf("the biggest number is %f",b);
		}
		else printf("the biggest number is %f",c);
	}
	else if (b==a)
	{
		if (c>b)
			printf("the biggest number is %f",c);
		else
			printf("the biggest number is %f",a);
	}
}
