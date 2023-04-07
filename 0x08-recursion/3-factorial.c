#include "main.h"

/**
 * factorial - a function to get the factorial of a given number
 * @n: number to find the factorial of
 *
 * Return: the factorial of the number
 */

int factorial(n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (n *factorial(n - 1));
}
