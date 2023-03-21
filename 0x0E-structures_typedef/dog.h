#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;
/**
 *struct dog- a struct that defines an object dog
 *@name: name of dog
 *@age: age fo dog
 *@owner: owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
