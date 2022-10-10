#include <stdio.h>
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - create a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner the dog
 *
 * Description: the struct give a the qualities of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
