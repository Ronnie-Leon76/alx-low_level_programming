#include "main.h"
/**
 * check_prime - check if a number is prime
 * @n: number
 * @i: divisor
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int check_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwuse return 0
 * @n: number
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
