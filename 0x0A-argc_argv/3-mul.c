#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc < 3)
	{
		print("Error\n");
		return (1);
	}

	j = 1;
	for (i = 1; i < argc; i++)
	{
		j *= atoi(argv[i]);
	}

	printf("%d\n", j);

	return (0);

}
