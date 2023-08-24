#include "lists.h"

/**
 * list_len - Finds the number of elements in a linked list
 * @h: The linked list_t list.
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements_num = 0;

	while (h != NULL)
	{
		elements_num++;
		h = h->next;
	}

	return (elements_num);
}
