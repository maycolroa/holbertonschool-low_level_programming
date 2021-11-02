#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new dog.
  * @name: struct name
  * @age: struct age
  * @owner: struct owner
  * Return: 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{int i, j, k;

	struct dog *new_dog;

	new_dog = malloc(sizeof(dog_t));

	for (j = 0; name[j]; j++)
		;
	for (k = 0; owner[k]; k++)
		;
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (j + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (k + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= j; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;

	for (i = 0; i <= k; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
