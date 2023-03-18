#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to add to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp, *new;

	if (!h)
	{
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			new->prev = tmp;
			if (tmp->next)
				tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	if (idx == i)
		return (add_dnodeint_end(h, n));
	return (NULL);

}
