#include<stdio.h>
int main()
{
	float a[100][100], b[100][100] ,rows, clms;

	printf("Enter number of rows: ");
	fflush(stdout);
	scanf("%f",&rows);

	printf("Enter number of columns: ");
	fflush(stdout);
	scanf("%f",&clms);

	for (int i = 0;i < rows;++i)
	{
		for(int j = 0;j < clms;++j)
		{
			printf("Enter the element no. %d %d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&a[i][j]);
			b[j][i] = a[i][j];
		}
	}

	printf("The matrix is:\n");
	for (int i = 0;i < rows;++i)
	{
		for(int j = 0;j < clms;++j)
		{
			printf("%f\t", a[i][j]);
		}
		printf("\n");
	}

	printf("The transpose is :\n");
	for (int i = 0;i < clms;++i)
	{
		for(int j = 0;j < rows;++j)
		{

			printf("%f\t", b[i][j]);
		}
		printf("\n");
	}
}
