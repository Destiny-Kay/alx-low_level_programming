#include <stdio.h>
#include "dog.h"
/**
 * init_dog- initializes a dog struct
 * @d: struct dog
 * @name: name of dog
 * @age: age of struct
 * @owner: owner of dog
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
