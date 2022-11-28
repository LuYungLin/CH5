#include <stdio.h>
#include <stdlib.h>

void cubeByReference(int *nptr);

int main(void)
{
	int number = 5;
	printf("The original number is %d\n", number);

	cubeByReference( &number);
	printf("The new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubeByReference(int *nptr)
{
	*nptr = *nptr * *nptr * *nptr;
}