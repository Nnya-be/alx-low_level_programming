#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int _putchar(char);
void print_name(char *, void (*f)(char *));
typedef void (*f)(char *);
#endif
