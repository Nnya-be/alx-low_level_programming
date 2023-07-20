#include <stdio.h>
/**
 *main - Entry point of the program.
 *print_multiple - takes numbers that are multiples of 3 and 5.
 *Return: Always 0 on success.
 */
void print_multiple(void);
int main(void)
{
print_multiple();
return (0);
}
void print_multiple(void)
{
unsigned long number;
unsigned long added;
for (number = 1023; number > 0; number--)
{
if ((number % 3) == 0)
added += number;
else if ((number % 5) == 0)
added += number;
}
printf("%lu\n", added);
}
