#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - run the program
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (strcmp(argv[2], "+") && strcmp(argv[2], "-")
		&& strcmp(argv[2], "*") && strcmp(argv[2], "/") && strcmp(argv[2], "%"))
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(argv[2], "/") || strcmp(argv[2], "%")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
