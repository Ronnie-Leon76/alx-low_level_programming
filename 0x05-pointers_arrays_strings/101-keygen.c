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
	// 2772 is the sum of all ASCII values of the password
	for (i = 0; i < 2772; i++)
	{
		// get the mod of 128 to get a valid ASCII value
		pass[i] = rand() % 128;
		sum += pass[i];
	}
	// subtract the difference between the sum and 2772 from the last character
	pass[i - 1] -= sum - 2772;
	for (i = 0; pass[i] != '\0'; i++)
		printf("%c", pass[i]);
	return (0);
}
