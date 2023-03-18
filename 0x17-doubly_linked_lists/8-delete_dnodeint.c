#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	tmp = *head;
	while (tmp)
	{
		if (i == index)
		{
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			else
				*head = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
