#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: pointer to the head of the list
 *
 * Return: sum of all data (n) or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
