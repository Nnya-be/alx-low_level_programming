#include "main.h"
/**
 *swap_int - swaps two integers
 *@a : first number
 *@b : second number
 */
void swap_int(int *a, int *b)
{
int *pointer;
pointer = &a;
a = &b;
b = &pointer;
}
