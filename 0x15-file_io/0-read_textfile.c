#include "main.h"
/**
 *read_textfile - Reads a text file and prints it to stdio
 *@filename: Name of the file to read
 *@letters: Number of letters
 *Return: The number of letter read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, bytesRead, bytesWrite;
char *buff;
if (filename == NULL)
{
return (0);
}
buff = malloc(sizeof(char) * letters + 1);
if (buff == NULL)
{
return (0);
}
fd = open(filename, 0_RDONLY);
bytesRead = read(fd, buff, letters);
bytesWrite = write(STDOUT_FILENO, buff, bytesRead);
free(buff);
if (fd == -1 || bytesRead == -1 || bytesWrite == -1)
{
return (0);
}
close(fd);
return (bytesWrite);
}
