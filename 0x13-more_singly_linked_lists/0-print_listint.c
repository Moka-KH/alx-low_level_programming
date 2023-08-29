#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: head of a list
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_Num = 1;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_Num++;
	}
	printf("%d\n", h->n);
	return (node_Num);
}
