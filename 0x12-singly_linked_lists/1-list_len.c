#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 *
 * @h: Parameter of the list
 *
 * Return: num of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num_node;

	for (num_node = 0; h != NULL; num_node++)
	{
		h = h->next;
	}

	return (num_node);
}
