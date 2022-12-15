#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int a;
	long int b;
	long int c;
	long int sum;

	a = 1;
	b = 2;
	sum = 0;
	for (i = 0; i < 32; i++)
	{
		if (b % 2 == 0)
			sum += b;
		c = a + b;
		a = b;
		b = c;

	}
	printf("%ld\n", sum);
	return (0);
}
