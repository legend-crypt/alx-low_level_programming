#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - create a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner the dog
 *
 * Description: the struct give a the qualities of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
