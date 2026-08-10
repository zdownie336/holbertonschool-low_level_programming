#include "lists.h"

/**
* print_dlistint - printing the elements inside the linked list.
* @h: the header node
*
* Return: the elements in the file
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i = i + 1;
		h = h->next;
	}
	return (i);
}
