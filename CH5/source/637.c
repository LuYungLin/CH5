#include <stdio.h>
#include <stdlib.h>
int RecursiveMaxium(int a[],int i);
int main(void)
{
	int a[10] = { 4,5,3,6,8,2,7,9,12,13 };
	RecursiveMaxium(a, 10);
	system("pause");
	return 0;
}

int RecursiveMaxium(int a[],int i)
{
	int max,j;
	max = a[0];
	for (j = 1; j < i; j++)
	{
		if (max < a[j])
		{
			max = a[j];
		}
		//printf("%d", a[j]);
	}
	printf("%d", max);

}
