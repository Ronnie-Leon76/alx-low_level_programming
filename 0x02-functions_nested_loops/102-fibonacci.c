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

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
