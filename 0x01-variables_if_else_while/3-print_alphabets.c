#include <stdio.h>


/**
* main - prints out your abcs in lowercase then uppercase
*
* Return: 0 standard output
*/

int main(void)
{
	char abc = 'a';

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	for (abc = 'A'; abc <= 'Z'; abc++)
		putchar(abc);

	putchar('\n');

	return (0);
}
