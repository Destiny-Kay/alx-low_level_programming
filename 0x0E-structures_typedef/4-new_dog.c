#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog- creates a new struct named dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the new dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->age = age;
	dog->name = name;
	dog->owner = owner;
	return (dog);
}
