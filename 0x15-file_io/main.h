#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


#define BUFFSIZE 1024
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
void print_exit(int, const char *, const char *);

#endif

