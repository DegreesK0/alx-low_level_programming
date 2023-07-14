#include <stdio.h>

/**
* main - prints alphabet in lowercase in reverse
*
* Return: 0 is successful
*/

int main(void)
{
	char cba = 'z';

	for (cba = 'z'; cba >= 'a'; cba--)
		putchar(cba);
	putchar('\n');

	return (0);
}
