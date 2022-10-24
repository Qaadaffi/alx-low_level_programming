#include "lists.h"

/**
 * *add_nodeint - is a function that adds a new node to the beginning of
 * s listint_t list
 * @head: is a pointer to the address of the head of the listint_t list
 * @n: is the integer of the new node to contain
 * Return: the address of the element, or return NULL if function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
