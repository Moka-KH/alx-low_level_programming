#include "lists.h"

/**
 * free_listint2 -  clear the list
 * @head: head of a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *del;
	listint_t *tmp;

	if (head != NULL)
	{
		tmp = *head;
		while ((del = tmp) != NULL)
		{
			tmp = tmp -> next;
			free(del);
		}
		*head = NULL;
	}
}
