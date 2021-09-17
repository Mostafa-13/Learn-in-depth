#include<stdio.h>
int main()
{
	float a, b, result;
	char op;
	int x;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&op);

	printf("\nEnter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&a,&b);

	switch (x=op)
	{

		case 42:					// * = 42 in ASCII
		{
			result = a * b;
			printf("%f * %f = %f",a,b,result);
			break;
		}

		case 43:					// + = 43 in ASCII
		{
			result = a + b;
			printf("%f + %f = %f",a,b,result);
			break;
		}

		case 45:					// - = 45 in ASCII
		{
			result = a - b;
			printf("%f - %f = %f",a,b,result);
			break;
		}

		case 47:					// / = 47 in ASCII
		{
			result = a / b;
			printf("%f / %f = %f",a,b,result);
			break;
		}
	}
}
