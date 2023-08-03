#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments (argument count)
 * @argv: the values of arguments (argument values)
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
