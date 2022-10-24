#include "lists.h"

/**
 * sum_listint - is a function that sums up all the data in a linked list
 * @head: is the head of the list
 * Return: the sum of all the data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
