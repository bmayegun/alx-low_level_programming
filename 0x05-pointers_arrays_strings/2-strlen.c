#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: Pointer to String parameter
 *
 * Return: int (length of the string)
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
