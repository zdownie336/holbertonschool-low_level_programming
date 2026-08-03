#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - printing all arguments regardless of type
* @format: the format identifier (c,i,f,s)
*/

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i;
	char *str;
	unsigned int j;

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(arg, int));
				j = 1;
				break;
			case 'i':
				printf("%d, ", va_arg(arg, int));
				j = 1;
				break;
			case 'f':
				printf("%f, ", va_arg(arg, double));
				j = 1;
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
				str = "(nil)";
				printf("%s, ", str);
				j = 1;
				break;
		}
		i = i + 1;
		if (format[i] && j == 1)
			printf(", ");
	}
	printf("\n");
	va_end(arg);
}
