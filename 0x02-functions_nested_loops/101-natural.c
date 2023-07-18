#include "main.h"
#include <stdio.h>

/**
*
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
