#include "lists.h"

/**
 * get_nodeint_at_index - is a function that returns the nth node of a
 * linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 * Return: the address of the node, or NULL if it does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int a = 0;

	while (head != NULL)
	{
		if (a <= index)
		{
			if (a == index)
			{
				cursor =  head;
				break;
			}
			head = head->next;
			a++;
		}
		else
		{
			return (NULL);
		}
	}
	return (cursor);
}
