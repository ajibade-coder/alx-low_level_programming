#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 * else the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_element);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_element->str = dup;
	new_element->len = len;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
