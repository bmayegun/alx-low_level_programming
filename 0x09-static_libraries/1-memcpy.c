#include "main.h"
/**
 * _memcpy - copies to memory area
 * @dest: area to copy to
 * @src: area to copy from
 * @n: number of bytes to be copied
 * Return: a pointer to the memeory area copied to (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
