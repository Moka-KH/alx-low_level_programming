#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 *
 * @head: Param that points to the head
 * @str: Param of the string
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (newNode);
}
