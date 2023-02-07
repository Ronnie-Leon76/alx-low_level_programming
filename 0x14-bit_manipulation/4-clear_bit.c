#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be checked
 * @index: index of the bit to be checked
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
