#include "lists.h"

/**
* dlistint_len - length of the linked list
* @h: header node.
*
* Return: number of elements in list.
*/

size_t dlistint_len(const dlistint_t *h)
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
