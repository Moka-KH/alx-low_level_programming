#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: head of list
 * @index: index where node is deleted
 *
 * Return: 1 if succeeded or -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	//unsigned int i;
	listint_t *prevNode;
	listint_t *next;

	prevNode= *head;

	if (index != 0)
	{
		for (int i = 0; i < index - 1 && prevNode != NULL; i++)
		{
			prevNode = prevNode -> next;
		}
	}

	if prevNode == NULL || prevNode -> next == NULL && index != 0))
	{
		return (-1);
	}

	next = prevNode -> next;

	if (index != 0)
	{
		prevNode -> next = next;
		free(next);
	}
	else
	{
		free(prevNode);
		*head = next;
	}
	return (1);
}
