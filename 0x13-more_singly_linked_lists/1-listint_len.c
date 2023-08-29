#include "lists.h"

/**
 * listint_len -  returns the number of elements of the list
 * @h: head of list
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodesNum = 0;

	while (h != NULL)
	{
		h = h -> next;
		nodesNum++;
	}
	return (_nodesNum);
}
