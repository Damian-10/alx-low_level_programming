#include "main.h"
/**
* _memset - fill a block of memory with a specific figure
* @s: starting address of memory to be filled
* @b: the desired result
* @n: number of bytes to be switched
*
* Return: changed array with new result for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
