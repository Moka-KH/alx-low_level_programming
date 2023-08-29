#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodesNum = 1;

	if (!h)
		return (0);

	printf("%d\n", h->n);
	while (h->next)
	{
		h = h->next;
		printf("%d\n", h->n);
		nodesNum++;
	}
	return (nodesNum);
}
