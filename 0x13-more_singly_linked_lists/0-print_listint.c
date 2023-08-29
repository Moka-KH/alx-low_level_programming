#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodesNum = 1;

	while (h)
	{
		printf("%d", h->n);
		printf("\n");

		h = h->next;
		nodesNum++;
	}
	return (nodesNum);
}
