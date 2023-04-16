#include "main.h"

/**
 * *_memset - fills the firrst n bytes of memeory area pointed to by s with b
 * @s: memory area to be filled
 * @b: char to put in memory
 * @n: number of times to copy
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
