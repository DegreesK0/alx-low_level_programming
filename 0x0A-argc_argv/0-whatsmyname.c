#include <stdio.h>

/**
* main - prints out the name of the program
* @argc: number of arguments (argument count)
* @argv: the values of arguments (argument values)
*
* Return: 0 if success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
