#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int a[], int key, int low, int high, int count);

int main(void) 
{
	int i,key,result;
	int a[100] ;
	for (i = 1; i <= 100; i++)
	{
		a[i-1] = 2 * i;
	}
	
	printf("�п�J�A�n�䪺��\n");
	scanf("%d", &key);
	result = BinarySearch(a, key, 0, 98, 1);
	if (result != -1)
	{
		printf("���Ȧ��b�}�C���A�æb��%d�����\n", result);
	}
	else
	{
		printf("���Ȥ��b�}�C��\n");
	}
	system("pause");
	return 0;
}

int BinarySearch(int a[], int key, int low, int high,int count)
{
	int middle =((low+high)/2);
	if (low > high)
	{
		return -1;
	}
	else if (a[middle] > key)
	{
		
		high = middle-1;
		count++;
		return BinarySearch(a, key, low, high, count);
		
	}
	else if (a[middle] < key)
	{
		low = middle+1;
		count++;
		return BinarySearch(a, key, low, high, count);
		
	}
	else
	{
		return count;
	}
}
