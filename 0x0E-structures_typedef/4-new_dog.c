#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: string
 * @age: float
 * @owner: string
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	len1 = 0;
	len2 = 0;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	newDog->name = (char *)malloc((len1 + 1) * sizeof(char));
	newDog->owner = (char *)malloc((len2 + 1) * sizeof(char));

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		newDog->name[i] = name[i];
	for (i = 0; i <= len2; i++)
		newDog->owner[i] = owner[i];
	newDog->age = age;
	return (newDog);
}
