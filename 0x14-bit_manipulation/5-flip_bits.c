#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * flip_bits - returns the number of bits to flip number
 * @n: number to be checked
 * @m: number to be checked
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;
	while (n > 0)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
