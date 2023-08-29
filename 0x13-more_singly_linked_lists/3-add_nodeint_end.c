#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: a pointer pointing to the head.
 * @n: parameter for int
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newmode, *temphead;

	newmode = malloc(sizeof(listint_t));
	if (newmode == NULL)
		return (NULL);

	newmode->n = n;
	newmode->next = NULL;

	temphead = *head;

	if (temphead == NULL)
		*head = newmode;
	else
	{
		while (temphead->next != NULL)
			temphead = temphead->next;
		temphead->next = newmode;
	}
	return (*head);
}


