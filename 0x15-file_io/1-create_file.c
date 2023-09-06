#include "main.h"
/**
 *create_file - Create a new file
 *@filename: Name of a file to be created
 *@text_content: The content to write to the file
 *Return: return 1 on success
 */
int create_file(const char *filename, char *text_content)
{
ssize_t fd, bytesWrite;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
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
/**
*_strlen - Claculate the string lengths
*@str: String
*Retrun :length of the string
*/
int _strlen(char *str)
{
int len;
while (str[len])
{
len++;
}
return (len);
}
