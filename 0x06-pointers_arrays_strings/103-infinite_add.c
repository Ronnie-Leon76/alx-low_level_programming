#include "main.h"
/**
 * infinite_add - adds two numbers and returns the result as a pointer to a
 * newly allocated space in memory
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;
	int p;
	int q;
	int carry;

	i = j = k = l = m = n = o = p = q = carry = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	i--;
	j--;
	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			k = n1[i] - '0';
		else
			k = 0;
		if (j >= 0)
			l = n2[j] - '0';
		else
			l = 0;
		m = k + l + carry;
		if (m > 9) 
		{
			carry = 1;
			m -= 10;
		}
		else
			carry = 0;
		r[o] = m + '0';
		o++;
		i--;
		j--;
	}
	if (carry == 1)
	{
		if (o == size_r)
			return (0);
		r[o] = carry + '0';
		o++;
	}
	r[o] = '\0';
	o--;
	while (o >= 0)
	{
		r[p] = r[o];
		p++;
		o--;
	}
	r[p] = '\0';
	return (r);
}
