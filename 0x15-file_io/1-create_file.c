#include "main.h"
/**
*_strlen - Claculate the string lengths
*@str: String
*Return: len of the string
*/
int _strlen(char *str)
{
int len;
for (len = 0; str[len]; len++)
{
;
}
return (len);
}

/**
 *create_file - Create a new file
 *@filename: Name of a file to be created
 *@text_content: The content to write to the file
 *Return: return 1 on success
 */
int create_file(const char *filename, char *text_content)
{
ssize_t bytesWrite;
int fd;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
bytesWrite = write(fd, text_content, _strlen(text_content));
if (bytesWrite == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
