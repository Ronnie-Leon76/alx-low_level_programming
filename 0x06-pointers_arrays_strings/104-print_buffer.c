#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;
	int k;
	int l;

	i = j = k = l = 0;
	if (size <= 0)
		printf("\n");
	while (i < size)
	{
		printf("%08x: ", i);
		j = 0;
		while (j < 10)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf(" ");
			if (j % 2 != 0)
				printf(" ");
			j++;
		}
		printf(" ");
		k = 0;
		while (k < 10)
		{
			if (i + k < size)
			{
				if (b[i + k] >= 32 && b[i + k] <= 126)
					printf("%c", b[i + k]);
				else
					printf(".");
			}
			k++;
		}
		printf("\n");
		i += 10;
	}
}
