#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - printing each element
* @h: the struct being referenced
*
* Return: the number of nodes in link
*/

size_t print_list(const list_t *h)
{
	int i;
	char *element;

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			element = "(nil)";
		}
		else
		{
			element = h->str;
		}

		printf("[%d] %s\n", h->len, element);
		i = i + 1;
		h = h->next;

	}
	return (i);
}
