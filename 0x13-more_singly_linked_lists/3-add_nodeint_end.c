#include "lists.h"

/**
 * add_nodeint_end - adds a new node to list
 * @head: head of list
 * @n: num of elements
 *
 * Return: pointer of the new element or NUll if none
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp;

	(void)tmp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode -> n = n;
	newNode -> next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tmp -> next != NULL)
		{
			tmp = tmp -> next;
		}
		tmp -> next = newNode;
	}

	return (*head);
}
