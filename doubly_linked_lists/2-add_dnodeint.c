#include "lists.h"

/**
* add_dnodeint - adding a new node to the beginning
* @head: head node
* @n: the integar data.
*
* Return: new doubly linked list.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(struct dlistint_s));

		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;

	if (*head != NULL)
		new_node->prev = *head;

	*head = new_node;
	return (new_node);
}
