#include <stdio.h>

/*
*
*/

int main(void)
{
	long num = 17;
	long j;
	/*int test = 25 / 2;

	printf("%d\n", test);*/

	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			break;
		}
		else if (j == num -1)
		{
			printf("%ld ", num);
		}
	}

	printf("\n");

	return (0);
}
