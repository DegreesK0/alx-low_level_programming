#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the name of the file it is compiled from
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
