#include <stdio.h>

/**
* print_array - printing each element of an array
* @n: value for number in array
* @a: the array's variable
*/

void print_array(int *a, int n)
{
	int i;

	i = 1;

	if (i < n)
	{
		printf("%d", a[0]);
	}

	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}

	printf("\n");
}
