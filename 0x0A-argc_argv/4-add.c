#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positve numbers used as input arguments and prints the result
 * @argc: number of arguments (argument count)
 * @argv: the values of arguments (argument values)
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 0; k < argc; k++)
	{
		if (atoi(argv[k]) >= 0)
			add += atoi(argv[k]);
	}

	printf("%d\n", add);

	return (0);

}
