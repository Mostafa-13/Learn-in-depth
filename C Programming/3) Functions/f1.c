#include<stdio.h>
void prime(int lower, int higher)
{
	if (lower <= higher)
	{
		int sub, cal = 0;
		for (int i = 2; i <= higher; i++)
		{
			sub = lower / i;
			if((sub*i) != lower)
			{
				cal++;
			}
		}
		if (cal == (higher-2))
		{
			printf("%d ", lower);
		}
		lower++;
		prime(lower,higher);
	}
}

int main()
{
	int lower,higher;
	printf("Please enter two intervals(start with the lower):\n");
	fflush(stdout);
	scanf("%d %d",&lower,&higher);
	prime(lower,higher);
}
