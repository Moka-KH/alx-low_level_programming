#include "lists.h"

/**
 * free_listint2 -  clear the list
 * @head: head of a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *del;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		del = node;
		node = node->next;
		free(del);
	}
	*head = NULL;
}
