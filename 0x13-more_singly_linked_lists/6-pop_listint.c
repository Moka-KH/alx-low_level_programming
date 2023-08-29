#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of a list
 *
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int head_Data;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	head_Data = (*head)->n;
	free(*head);
	*head = node;
	return (head_Data);
}
