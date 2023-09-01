#include "main.h"
/**
 *get_endianness - checks the endianness
 *Return: The endianness
 */
int get_enianness(void)
{
unsigned int num = 1;
unsigned char *bytePtr = (unsigned char *)&num;
return (int)(*bytePtr);
}
