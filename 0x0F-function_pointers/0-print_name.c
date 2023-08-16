#include "function_pointers.h"
/**
 *print_name - Function that prints a name
 *@name: name of to be printed
 *@f : function pointer
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
