#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize struct
  * @d: name
  * @name: name of dog
  * @age: age of dog
  * @owner: name in struct
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
