#include "main.h"
/**
 *_strlen - checks for the size of a string
 *@s : the string to be passed in
 *Return: length of string
 */
int _strlen(char *s)
{
int length;
int i;
while (*(s + i) != '\0')
{
length++;
i++;
}
return (length);
}
