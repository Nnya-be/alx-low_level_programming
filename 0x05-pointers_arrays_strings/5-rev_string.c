#include <string.h>
#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s : the string to be taken
 *return: nothing
 */
void rev_string(char *s)
{
int i = 0;
int length = strlen(s);
char temp;
while (*s != '\0')
{
s++;
}
while (length > 0)
{
temp = s[length];
s[i] = temp;
length--;
i++;
}
}
