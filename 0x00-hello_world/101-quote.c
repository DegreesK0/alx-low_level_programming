#include<unistd.h>

/**
 * main - Prints without printf or put using write
 *
 * Return: return 1 as the error
*/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, 59);
	return (1);
}
