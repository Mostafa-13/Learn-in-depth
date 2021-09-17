#include<stdio.h>
int main()
{
	float a[100], num, b[100];
	int n1, loc;

	printf("Enter the no of elements: ");
	fflush(stdout);	fflush(stdin);
	scanf("%d",&n1);

	printf("Enter the elements:\n");
	fflush(stdout);	fflush(stdin);
	for(int i=0;i<n1;++i)
	{
		scanf("%f",&a[i]);
	}

	printf("Enter the element you want to insert: ");
	fflush(stdout);	fflush(stdin);
	scanf("%f",&num);

	printf("Enter the element location: ");
	fflush(stdout);	fflush(stdin);
	scanf("%d",&loc);

	loc--;
	for(int i = 0;i < loc; ++i)
	{
		b[i] = a[i];
		//printf("%f\t",b[i]);
	}

	b[loc] = num;

	for(int i = loc;i < n1; ++i)
	{
		b[i+1] = a[i];
		//printf("%f\t",b[i]);
	}

	n1++;
	for(int i=0;i<n1;++i)
	{
		printf("%f\t",b[i]);
	}
}
