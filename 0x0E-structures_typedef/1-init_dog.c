#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - check code
 * @d: array
 * @name: name
 * @age: the age
 * @owner: owner
 * Description: dog struct
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
