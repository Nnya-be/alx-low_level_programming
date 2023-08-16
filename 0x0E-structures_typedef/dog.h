#ifndef DOG_H
#define DOG_H
/**
 *struct dog - the dog structure
 *@name : the first
 *@age : the second member
 *@owner: the third member
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog*, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
#endif
