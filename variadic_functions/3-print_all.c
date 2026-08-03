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

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(arg, int));
				break;
			case 'i':
				printf("%d, ", va_arg(arg, int));
				break;
			case 'f':
				printf("%f, ", va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
				str = "(nil)";

				 printf("%s, ", str);
				break;
		}
		i = i + 1;
	}
	printf("\n");
	va_end(arg);
}
