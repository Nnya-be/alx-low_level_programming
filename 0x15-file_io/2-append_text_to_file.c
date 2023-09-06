#include "main.h"
/**
 *append_text_to_file - Adds a string to the end of a file
 *@filename: The file location to add the string
 *@text_content: The string to be added
 *Return: 1 on success and -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t b_written;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
{
close(fd);
return (-1);
}
if (text_content != NULL)
{
b_written = write(fd, text_content, strlen(text_content));
if (b_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
