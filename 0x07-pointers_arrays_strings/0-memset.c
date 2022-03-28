#include "main.h"
/**
 * _memset - fills first @n bytes of memory
 * @s: memory
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
