#include <stdlib.h>
#include "dog.h"
/**
 *free_dog- frees memeory of struct dog
 *@d: struct
 *
 *
 *
 *
 */
void free_dog(dog_t *d)
{
	free(d);
	d = NULL;
}
