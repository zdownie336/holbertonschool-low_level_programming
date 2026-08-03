#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
* add_node - addiing a new node to the start of line
* @head: the head node
* @str: string and nodes
*
* Return: the linked list.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int l;

	l = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(struct list_s));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (*str != '\0')
	{
		l = l + 1;
		str++;
	}
	new_node->len = l;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
