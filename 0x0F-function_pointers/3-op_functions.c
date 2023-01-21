#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @s: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @s: first integer
 * @b: second integer
 *
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - computes the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
