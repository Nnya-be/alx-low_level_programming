#include "main.h"
/**
 *_strlen - checks for the size of a string
 *@s : the string to be passed in
 *Return: length of string
 */
int _strlen(char *s)
{
int i;
int length;
while (s[i] != '\o')
{
length++;
i++;
}
return (length);
}