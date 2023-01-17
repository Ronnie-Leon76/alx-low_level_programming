#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minumum value
 * @max: maximum value
 *
 * Return: pointer to array
 */
int *array_Range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + 1;
	return (p);
}
