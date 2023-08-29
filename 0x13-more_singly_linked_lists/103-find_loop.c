#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: pointer to node where loop starts or NULL if none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (tmp = head; tmp != end; tmp = tmp->next)
			if (tmp == end->next)
				return (end->next);
	}

	return (NULL);
}
