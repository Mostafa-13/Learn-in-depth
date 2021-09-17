#include<stdio.h>
int main()
{
	float a[100],elmnt;
	int n, loc = 0;

	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&n);

	printf("Enter the elements: \n");
	fflush(stdout);
	for(int i = 0;i < n;++i)
	{
		scanf("%f",&a[i]);
	}

	printf("Enter the element to be searched: ");
	fflush(stdout);
	scanf("%f",&elmnt);

	for(int i = 0;i < n;++i)
	{
		loc++;
		if (i+1 == n)
			printf("\nNot found!");

		else if (elmnt != a[i])
			continue;

		else if (elmnt == a[i])
		{
			printf("Number found at location: %d",loc);
			break;
		}
	}

}
