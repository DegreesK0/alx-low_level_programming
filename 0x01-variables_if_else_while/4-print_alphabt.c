#include <stdio.h>


/**
* main - prints out your abcs except 'q' and 'e'
*
* Return: 0 standard output
*/

int main(void)
{
	char abc = 'a';

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc == 'q' || abc == 'e')
		{
			abc++;
		}
      		else
      		{
			putchar(abc);
		}
	}
	
	putchar('\n');

	return (0);
}
