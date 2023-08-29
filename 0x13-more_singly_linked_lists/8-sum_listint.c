#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: pointer to the first node
 * Return: sum of all n in listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
}
