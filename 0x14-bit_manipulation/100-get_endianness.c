#include "main.h"
/**
* get_endianness - To check if a machine is little or big endian
* Return: Value 0 for big, Value 1 for little
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
