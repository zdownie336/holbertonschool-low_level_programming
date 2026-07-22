#include "main.h"

/**
* reverse_array - reversing the array's integars
* @a: the array
* @n: the elements to swap
*
*/

void reverse_array(int *a, int n)
{
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		int tmp = a[i];

		a[i] = a[j];
		a[j] = tmp;
	}
}
