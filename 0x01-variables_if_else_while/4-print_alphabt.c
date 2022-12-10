#include <stdio.h>

/**
 * main - Entry file
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n')i;
	return (0);
}
