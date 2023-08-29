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
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
