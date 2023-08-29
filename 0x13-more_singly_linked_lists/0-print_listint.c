#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head of list
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_Num = 0;

	while (h != NULL)
	{
		printf("%d\n", h -> n);
		h = h -> next;
		nodes_Num ++;
	}
	return (nodes_Num);
}
