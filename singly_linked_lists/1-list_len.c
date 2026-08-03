#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* list_len - listing the number of elements
* @h:the struct
*
* Return: the list of the elements
*/
size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
