#include "lists.h"

/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;
	
	
	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
