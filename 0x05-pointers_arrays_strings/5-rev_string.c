#include <string.h>
#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s : the string to be taken
 *return: nothing
 */
void rev_string(char *s)
{
int length = strlen(s) - 1;
char temp;
int i;
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i];
s[length - i] = temp;
}
}
