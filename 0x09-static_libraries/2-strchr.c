#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be searched
 * @c: the character to find
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\n')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
