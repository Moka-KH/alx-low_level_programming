#include "lists.h"

/**
 * add_nodeint - adds a new node to list
 * @head: head of list
 * @n: num of elements
 *
 * Return: pointer of the new element, or NULL if none
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode -> n = n;
	newNode -> next = *head;
	*head = newNode;

	return (*head);
}
