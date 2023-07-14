#include <stdio.h>
/**
 *main - Entry point of the program
 *Return: 1 (showing error)
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fputs(message, stderr);
return (1);
}
