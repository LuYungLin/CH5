#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int *aptr;

	a=7;
	aptr = &a;

	printf("The address of a is %p\n", &a);
	printf("The value of aptr is %p\n", aptr);

	printf("\n\nThe value of a is %d\n", a);
	printf("The value of *aptr is %p\n", *aptr);

	printf("\n\nShowing that * and & are the complement of each other\n&*aptr = %p\n*&aptr = %p\n", &*aptr, *&aptr );
	system("pause");
	return 0;
}