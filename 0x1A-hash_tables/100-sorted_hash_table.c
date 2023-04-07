#include "hash_tables.h"
/**
 * shash_table_create -  creates a sorted hash table
 *
 * @size: The size of the array
 * Return: pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *stable;

	stable = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (!stable)
		return (NULL);
	stable->size = size;
	stable->array = (shash_node_t **)calloc(stable->size, sizeof(shash_node_t **));
	stable->array[0] = NULL;
	stable->shead = stable->array[0];
	for (i = 1; i < stable->size; i++)
		stable->array[i] = NULL;
	stable->stail = stable->array[i];
	return (stable);
}
/**
 * shash_table_set - adds an element to the sorted hash table
 *
 * @ht: sorted hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *tmp;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		new->sprev = NULL;
		new->snext = NULL;
	}
	else
	{
		tmp = ht->shead;
		while (tmp)
		{
			if (strcmp(tmp->key, key) > 0)
			{
				if (tmp->sprev == NULL)
				{
					new->sprev = NULL;
					new->snext = tmp;
					tmp->sprev = new;
					ht->shead = new;
				}
				else
				{
					new->sprev = tmp->sprev;
					new->snext = tmp;
					tmp->sprev->snext = new;
					tmp->sprev = new;
				}
				break;
			}
			tmp = tmp->snext;
		}
		if (tmp == NULL)
		{
			new->sprev = ht->stail;
			new->snext = NULL;
			ht->stail->snext = new;
			ht->stail = new;
		}
	}
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table you want to look into
 * @key: key you are searching for
 * Return: value associated with element, or Null if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints a hash table
 *
 * @ht: hash table
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int position = 0;
	if (!ht)
		return;
	printf("{");
	temp = ht->shead;
	while (temp)
	{
		if (position == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		position = 1;
		temp = temp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a hash table in reverse order
 *
 * @ht: hash table
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int positionFlag = 0;
	if (!ht)
		return;
	printf("{");
	temp = ht->stail;
	while (temp)
	{
		if (positionFlag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		positionFlag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a has table
 * @ht: hash table
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp, *temp2;
	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	
	}
	free(ht->array);
	free(ht);
}
