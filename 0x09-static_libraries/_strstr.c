#include "main.h"

/**

 * _strstr - locates a substring

 * @haystack: string

 * @needle: substring

 *

 * Return: pointer to the beginning of the located substring, or NULL if the

 * substring is not found

 */

char *_strstr(char *haystack, char *needle)

{

    int i, j, k;



    i = j = k = 0;

    while (haystack[i] != '\0')

    {

        while (needle[j] != '\0')

        {

            if (haystack[i + j] == needle[j])

                k++;

            j++;

        }

        if (k == j)

            return (haystack + i);

        i++;

        j = k = 0;

    }

    return (0);

}
