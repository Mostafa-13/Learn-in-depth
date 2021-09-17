#include <stdio.h>
int main()
{
	float a[100] , sum , avrg;
	int n;

	printf("Enter the number of data: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&n);

	 for (int i = 0; i < n; i++)
	{
		printf("Enter your number: ");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&a[i]);
		sum += a[i];
	}

	avrg = sum/n;
	printf("The average = %f",avrg);
}
