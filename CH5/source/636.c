#include <stdio.h>
#include <stdlib.h>
void StringReserve(char a[], int i);
int main(void)
{
	int i;
	 char a[] = { 'b','r','u','c','e' };
	/*for (i = 0; i < 5; i++)
	{
		printf("%c ", a[i]);
	}*/
	StringReserve(a, 4);
	system("pause");
	return 0;
}


void StringReserve(char a[],int i)
{
	if (i < 0)
	{
		return 0;
	}
	else
	{
		printf("%c ", a[i]);
		i--;
		StringReserve(a, i);
	}
		
	

}