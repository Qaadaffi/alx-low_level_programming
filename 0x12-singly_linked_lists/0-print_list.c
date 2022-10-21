#include "lists.h"
/**
 * print_list - prints every element of the list `list_t`
 * @h: pointer to the linked list to be printed
 * Return: if str is NULL print 0, otherwise print the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{

		if (h->str == NULL) /* if falsy i.e. NULL, NaN, undefined or "" */
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		s++;
	}

	return (s);
}
