#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - printing the array of integars being designated
* @n: input value
* @separator: value for seperating ints
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int j;

	i = 0;

	if (separator == NULL)
	{
		separator = "";
	}

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(numbers, n);

	printf("%d", va_arg(numbers, int));

	while (i < n - 1)
	{
		j = 0;
		while (separator[j] != '\0')
		{
			printf("%c", separator[j]);
			j = j + 1;
		}
		printf("%d", va_arg(numbers, int));
		i = i + 1;
	}
	printf("\n");

	va_end(numbers);
}
