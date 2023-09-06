#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <fcnt1.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFSIZE 1024
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
void print_exit(int, const char *, const char *);
int _strlen(char *);
#endif
