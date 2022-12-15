#include "main.h"
#include <stdio.h>

/**
 * prints_times_table - prints the n times table, starting with 0
 * @n: The number of times table to print
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if(n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					printf("%d", k);
				}
				else if (k < 10)
				{
					printf(",  %d", k);
				}
				else if (k < 100)
				{
					printf(",   %d", k);
				}
				else 
				{
					printf(", %d", k);
				}
			}
			printf("\n");
		}
	}
}
