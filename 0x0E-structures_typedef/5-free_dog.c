#include "dog.h"
#include <stdlib.h>
/**
 * free_dog- frees a dog struct
 * @d: struct dog
 * Return: void
*/
void free_dog(dog_t *d)
{
	free(d);
}

