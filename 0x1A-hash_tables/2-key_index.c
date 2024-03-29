#include "hash_tables.h"
/**
 * key_index - provides the index of a key
 *
 * @key: key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0 || key == NULL)
		return (0);
	index = hash_djb2(key) % size;
	return (index);
}
