#include "dog.h"
/**
 *init_dog - Function to initialize the struct
 *@d : the first argument
 *@name: the second argument
 *@age : the third argument
 *@owner: the fourth argument
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog) - 1);
}
d->name = name;
d->age = age;
d->owner = owner;
}
