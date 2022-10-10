#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize the dog structure
 * @d: the dog struct
 * @name: first member
 * @age: second member
 * @owner: third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}
