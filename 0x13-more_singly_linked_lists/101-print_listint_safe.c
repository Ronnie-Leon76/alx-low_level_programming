#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list with a loop safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
