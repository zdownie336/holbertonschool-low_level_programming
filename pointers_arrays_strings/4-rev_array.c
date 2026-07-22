#include "main.h"

/**
* reverse_array - reversing the array's integars
* @a: the array
* @n: the elements to swap
*
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		int tmp = a[i];

		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
