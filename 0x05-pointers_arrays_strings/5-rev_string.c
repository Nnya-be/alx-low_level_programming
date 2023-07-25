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
char temp = s[0];
while (s[l] != '\0')
{
l++;
}
for ( i = 0; i < l; i++)
{
  l--;
  temp = s[i];
  s[i] = s[l];
  s[l] = temp;
}
}
