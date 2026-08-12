#include "lists.h"

/**
* insert_dnodeint_at_index - inserting a node at a specific index
* @h: the header node
* @idx: the index number
* @n: value of the node
*
*Return: new list with new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i;

	i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	current = *h;
	while (current->next != NULL && i < idx - 1)
	{
		current = current->next;
		i = i + 1;
	}
	if (i != idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new;
	}
	current->next = new;
	new->prev = current;

	return (new);
}
