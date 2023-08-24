#include "lists.h"
/**
 * free_list - clear the list
 *
 * @head: param points to the head
 * return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
