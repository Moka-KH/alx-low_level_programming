#include "lists.h"

/**
 * print_listint - prints all the 
 * elements of a list
 * @h: head of list
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodesNum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesNum++;
	}
	return (nodesNum);
}
