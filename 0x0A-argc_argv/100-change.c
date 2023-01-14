#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, sum, coins;
	int den[] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (sum > 0)
	{
		j = sum / den[i];
		sum -= j * den[i];
		coins += j;
		i++;
	}
	printf("%d\n", coins);
	return (0);
}
