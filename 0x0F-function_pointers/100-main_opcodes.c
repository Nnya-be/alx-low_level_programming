#include <stdio.h>
#include <stdlib.h>
/**
 *main - functions starting
 *@argv : arg vector
 *@argc : arg counter
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
int b = atoi(argv[1]);
int i;
unsigned char *ptr = (unsigned char *)main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (b <= 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < b; i++)
{
if (i != b - 1)
{
printf(" ");
}
printf("%.2hhx", *(ptr + 1));
}
printf("\n");
return (0);
}
