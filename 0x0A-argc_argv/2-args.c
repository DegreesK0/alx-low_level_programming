#include <stdio.h>

/**
 * main - prints all arguments the function receives
 * @argc: number of arguments (argument count)
 * @argv: the values of arguments (argument values)
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
