#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at given index
 * @head: head of list
 * @index: index of the certain node
 *
 * Return: the node at given index or returns NULL if none
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	//unsigned int i;

	for (int i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
