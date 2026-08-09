#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* add_node_end - attaching a new node to the end of the list
* @head: the head node.
* @str: the string being added.
*
* Return: linked list.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	int length;

	length = 0;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(struct list_s));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (*str != '\0')
	{
		length = length + 1;
		str++;
	}
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
