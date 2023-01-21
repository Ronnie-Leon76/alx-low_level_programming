#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error \n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error \n");
		exit(2);
	}
	for (i = 0; i < n; i++)
		printf("%02hhx ", *((char *)main + i));
	printf("%02hhx\n", *((char *)main + i));
	return (0);
}
