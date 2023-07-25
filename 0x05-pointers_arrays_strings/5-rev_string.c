#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s : the string to be taken
 *return: nothing
 */
void rev_string(char *s)
{
int i;
int l;
char temp[];
while (*s != '\0')
{
l++;
s++;
}
for ( i = 0; i <= l; i++)
{
temp[i] = *s;
s--;
}
s = temp;
}
