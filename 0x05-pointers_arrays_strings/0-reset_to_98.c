#include "main.h"
/**
 *reset_to_98 - reset the number with a pointer
 *@n : the number to be passed
 */
void reset_to_98(int *n)
{
int *n_pointer = NULL;
n_pointer = &n;
*n_pointer = 98;
}
