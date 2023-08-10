#include "main.h"
/**
*_memcpy - a function that replecates memory area
*@dest: memory where is stored
*@src: memory where is replecated
*@n: number of bytes
*
*Return: replecated memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;


	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
