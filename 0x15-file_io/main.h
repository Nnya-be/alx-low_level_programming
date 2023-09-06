#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFSIZE 1024
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
void print_exit(int, const char *, const char *);
int _strlen(char *);


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


#endif
