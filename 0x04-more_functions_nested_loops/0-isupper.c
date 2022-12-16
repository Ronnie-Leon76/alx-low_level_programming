#include "main.h"

/**
 * _isupper - checks whether a character is uppercase
 * @c: The character to check
 *
 * Returns: 1 if the character is in uppercase
 * Otherwise, 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
