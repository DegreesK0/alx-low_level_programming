#include "main.h"
#include <stdio.h>

/**
* main - sums up all multiples of 5 or 3 up tile 1024 (excluded)
*
* Return: 0 is successful
*/

int main(void)
{
	int num = 0;
	int sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num; /*or sum = sum + num*/
		}
	}

	printf("%d\n", sum);

	return (0);
}
