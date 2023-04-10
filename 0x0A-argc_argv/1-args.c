#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: the count of arguments passed to the program
 * @argv: the arguments passed to te program
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
