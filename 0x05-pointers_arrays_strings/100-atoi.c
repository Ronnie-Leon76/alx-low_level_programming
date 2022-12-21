#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts string to integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int num;

	sign = 1;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	if ((num * sign) > INT_MAX)
		return (INT_MAX);
	else if ((num * sign) < INT_MIN)
		return (INT_MIN);
	else
		return (num * sign);
}
