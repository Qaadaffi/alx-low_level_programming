#include "lists.h"

/**
*free_listint - is a function that frees a linked list
*@head: head of the list
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
