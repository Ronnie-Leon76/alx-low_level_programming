#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		temp = head->next;
		i++;
	}
	return (temp ? temp : NULL);
}
