#include "dog.h"
/**
 *new_dog - Create a new dog information
 *@name : first argument
 *@age : second argument
 *@owner: third argument
 *Return: NULL on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_ptr;
dog_t dog
char dog_name[] = name;
char dog_owner[] = owner
dog = malloc(sizeof(struct dog));
if (dog == NULL)
{
return (NULL);
}
dog.name = dog_name;
dog.age = age;
dog.owner = dog_owner;
*dog_ptr = &dog;
return (dog_ptr);
}
