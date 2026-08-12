#include "lists.h"

/**
 * get_dnodeint_at_index - getting the node at a specific index
 * @head: the head node
 * @index: index looking for.
 *
 * return the nth node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;
	
	i = 0;
	
	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	
	if (index != i)
		return (NULL);

	return (current);
}
