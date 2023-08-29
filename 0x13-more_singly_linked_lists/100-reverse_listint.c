#include "lists.h"

/**
 * reverse_listint - reverses the list
 * @head: head of list
 *
 * Return: a pointer to the 1st node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1;
	listint_t *node2;

	node1 = NULL;
	node2 = NULL;

	while (*head != NULL)
	{
		node2 = (*head)->next;
		(*head)->next = node1;
		node1 = *head;
		*head = node2;
	}

	*head = node1;
	return (*head);
}
