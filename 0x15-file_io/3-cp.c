#include "main.h"
/**
*main - Copy contents to other files
*@ac: arg count
*@av: arg vector
*Return: 0 on success
*/
int main(int ac, char **av)
{
int src, dst, bytes_rd, bytes_wr;
char buffer[BUFFSIZE];
if (ac != 3)
{
print_exit(97, "Usage: cp file_from file_to\n", av[0]);
}
src = open(av[1], O_RDONLY);
if (src == -1)
{
print_exit(98, "Error: Can't read from file %s\n", av[1]);
}
dst = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (dst == -1)
{
print_exit(99, "Error: Can't wirte to %s\n", av[2]);
}
while ((bytes_rd = read(src, buffer, BUFFSIZE)) > 0)
{
bytes_wr = write(dst, buffer, bytes_rd);
if (bytes_wr == -1)
{
print_exit(99, "Error: Can't write to %s\n", av[2]);
}
}
if (bytes_rd == -1)
{
print_exit(98, "Error: Can't read from file %s\n", av[1]);
}
if (close(src) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
exit(100);
}
if (close(dst) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst);
exit(100);
}
return (0);
}

/**
*print_exit - print an error with exit code
*@code: exit code
*@msg: Message of error
*@file: file name
*/
void print_exit(int code, const char *msg, const char *file)
{
dprintf(STDERR_FILENO, msg, file);
exit(code);
}
