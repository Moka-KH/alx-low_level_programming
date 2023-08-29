#include "lists.h"

/**
 * free_listint - clears the list
 * @head: head of a list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *del;

	while ((del = head) != NULL)
	{
		head = head->next;
		free(del);
	}
}
