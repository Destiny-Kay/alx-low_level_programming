#include <stdio.h>
#include "dog.h"

/**
 * print_dog- prints a dog struct
 * @d: struct dog
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
