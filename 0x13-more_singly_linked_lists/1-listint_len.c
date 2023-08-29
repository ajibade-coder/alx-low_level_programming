#include "lists.h"
/**
 * listint_len -  a function that returns the number of elements
 * @h: header to listint_t
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len_element = 0;

	while (h != NULL)
	{
		len_element++;
		h = h->next;
	}
	return (len_element);
}
