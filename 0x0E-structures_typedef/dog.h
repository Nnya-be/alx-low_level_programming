#ifndef DOG_H
#define DOG_H
/**
 *struct dog - the dog structure
 *@name : the first
 *@age : the second member
 *@owner: the third member
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog*, chat *, float, char *);
#endif
