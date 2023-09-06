#include "main.h"
/**
 *append_text_to_file - Adds a text to the end of file
 *@filename: Filename
 *@text_content: A String to be appended
 *Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t fd, byteWrite;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
byteWrite = write(fd, text_content, _strlen(text_content));
if (byteWrite == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
