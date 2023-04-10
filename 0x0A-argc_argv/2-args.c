#include <stdio.h>
#include "main.h"

/**
 * main - prints all the  arguments passed to the program
 *
 * @argc: count of the arguments passed
 * @argv: arguments passed to the program
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
