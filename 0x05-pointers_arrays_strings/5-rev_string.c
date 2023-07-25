#include <string.h>
#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s : the string to be taken
 *return: nothing
 */
void rev_string(char *s)
{
int i;
int length = strlen(s);
char temp[length];
while (*s != '\0')
{
s++;
}
for (i = 0; i < length; i++)
{
temp[i] = *s;
s--;
}
s = temp;
}
