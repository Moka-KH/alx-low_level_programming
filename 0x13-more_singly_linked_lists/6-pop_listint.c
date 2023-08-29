#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of a list
 *
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	int headData;
	listint_t *newHead;
	listint_t *del;

	if (*head == NULL)
		return (0);

	del = *head;

	headData = del ->n;

	newHead = del->next;

	free(del);

	*head = newHead;

	return (headData);
}
