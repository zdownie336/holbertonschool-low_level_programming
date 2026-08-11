#include "lists.h"

/**
 * free_dlistint - freeing all allocated memory
 * @head: node being free'd
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head);
		head = temp;
	}
}
