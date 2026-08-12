#include "lists.h"

/**
* sum_dlistint - prints the sum of all elements
* @head: the head node
*
* Return: sum of the nodes.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}
