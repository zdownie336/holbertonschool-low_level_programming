#include <stdarg.h>
#include "main.h"

/**
* sum_them_all - used to sum the entire variadic list
* @n: number of variables in the list
*
* Return: sum of the values
*/
int sum_them_all(const unsigned int n, ...)
{
	int result;
	va_list arg;
	unsigned int i;

	result = 0;
	i = 0;

	va_start(arg, n);

	while (i < n)
	{
		result = result + va_arg(arg, int);
		i = i + 1;
	}
	va_end(arg);
	return (result);
}
