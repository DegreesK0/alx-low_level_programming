#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments (argument count)
 * @argv: the values of arguments (argument values)
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int change[] = {25, 10, 5, 2, 1};
	int coins = 0;
	int remainder = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	remainder = atoi(argv[1]);

	if (remainder < 0)
	{
		printf("0\n");
		return(0);
	}


	for (i = 0; i < 5 && remainder != 0; i++)
	{
		coins += remainder / change[i];
		remainder = remainder % change[i];
	}

	printf("%d\n", coins);

	return (0);
}
