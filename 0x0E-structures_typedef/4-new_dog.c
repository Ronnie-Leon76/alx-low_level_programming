#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len1, len2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		d->name[i] = name[i];
	d->age = age;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;
	d->owner = malloc(sizeof(char) *(len2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len2; i++)
		d->owner[i] = owner[i];
	return (d);
}
