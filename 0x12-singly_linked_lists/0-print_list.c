#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: linked list
 * Return: no. of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t elements_num;

	elements_num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements_num++;
	}
	return (elements_num);
}
