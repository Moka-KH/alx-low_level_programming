#include "lists.h"
/**
 * add_node - adds a new node
 *
 * @head: Param of the head node
 * @str: param of the element str 
 *
 * Return: head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
