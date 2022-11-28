#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int a, b, i, j;
	int sum[12] = { 0 };
	int *sumptr = sum;
	srand(time(NULL));
	for (i = 0; i < 36000; i++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		sum[a + b-1]++;

	}
	for (i =2; i <=12; i++)
	{
		printf("%d	%d", i, sum[i-1]);
		printf("\n");
	}
	

}