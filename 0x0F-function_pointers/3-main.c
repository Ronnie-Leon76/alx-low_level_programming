#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error \n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2])(a, b);
	printf("%d \n", result);
	return (0);
}
