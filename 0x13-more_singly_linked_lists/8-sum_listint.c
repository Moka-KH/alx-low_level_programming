#include "lists.h"

/**
 * sum_listint - returns sum of all the data in list
 * @head: head of list
 *
 * Return: sum of all the data in list
 */
int sum_listint(listint_t *head)
{
	int dataSum;

	dataSum = 0;
	while (head != NULL)
	{
		dataSum += head->n;
		head = head->next;
	}

	return (dataSum);
}
