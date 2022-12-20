#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int sum;
	int pass[100];

	srand(time(NULL));
	sum = 0;
	for (i = 0; i < 2772; i++)
	{
		pass[i] = rand() % 128;
		sum += pass[i];
	}
	pass[i - 1] -= sum - 2772;
	for (i = 0; pass[i] != '\0'; i++)
		printf("%c", pass[i]);
	return (0);
}
