#include <stdio.h>

/*
 * main - Entry file
 *
 * Return: Always (0) Sucess
 */



int main(void)
{
	char c[] = "_putchar";
	int i;

	for(i=0; i < 8; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
