#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node,
 * at a given index
 * @head: head of a list
 * @idx: index where the new node is
 * added
 * @n: int
 *
 * Return: pointer to the new node or NULL if none
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	//unsigned int i;
	listint_t *newNode;
	listint_t *tmp;

	tmp = *head;

	if (idx != 0)
	{
		for (int i = 0; i < idx - 1 && h != NULL; i++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode ->next = *head;
		*head = newNode;
	}
	else
	{
		newNode ->next = tmp->next;
		tmp->next = newNode;
	}

	return (newNode);
}
