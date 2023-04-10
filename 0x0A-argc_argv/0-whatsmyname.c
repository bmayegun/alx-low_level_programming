#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 *
 * @argc: the count of arguments passed to the program
 * @argv: an array of the arguments passed to the program
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
