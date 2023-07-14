#include <stdio.h>

/**
* main - prints all base 16 numbers in lowercase
*
* Return: 0 means success
*/

int main(void)
{
	char base16 = '0';

	for (base16 = '0'; base16 <= '9'; base16++)
		putchar(base16);

	for (base16 = 'a'; base16 <= 'f'; base16++)
		putchar(base16);

	putchar('\n');

	return (0);
}
