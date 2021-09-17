#include<stdio.h>
int main()
{
	 float a[2][2], b[2][2], s[2][2];
	 printf("Enter the elements of the 1st matrix:\n");
	 for (int i = 0; i < 2; i++)
	 {
		 for (int j = 0; j < 2; j++)
		 {
			printf("Enter a%d%d: ",i,j);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&a[i][j]);
		 }
	 }
	 printf("Enter the elements of the 2nd matrix:\n");
	 for (int i = 0; i < 2; i++)
	 {
		 for (int j = 0; j < 2; j++)
		 {
			printf("Enter b%d%d: ",i,j);
			fflush(stdin);		fflush(stdout);
			scanf("%f",&b[i][j]);
		 }
	 }
	 for (int i = 0; i < 2; i++)
		 {
			 for (int j = 0; j < 2; j++)
			 {
				 s[i][j] = a[i][j] + b[i][j];
			 }
		 }
	 printf("Sum of matrix:\n");
	 for (int i = 0; i < 2; i++)
	 {
		 for (int j = 0; j < 2; j++)
		 {
			printf("%f\t",s[i][j]);
		 }
		 printf("\n");
	 }
}
