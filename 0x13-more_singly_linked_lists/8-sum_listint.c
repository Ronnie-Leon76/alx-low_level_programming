#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a list_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
