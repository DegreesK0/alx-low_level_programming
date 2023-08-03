#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers used as input arguments and prints the result
 * @argc: number of arguments (argument count)
 * @argv: the values of arguments (argument values)
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul = 0;
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);


}
