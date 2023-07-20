#include <stdio.h>

/*
*
*/

int main(void)
{
	long num = 12345678901;
	long i;
	long j;
	/*int test = 25 / 2;

	printf("%d\n", test);*/

	for (i = num / 2; i > 0; i--)
	{
		if (num % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					break;
				}
				else if (j == i - 1)
				{
					printf("%ld ", i);
					printf("\n");
					return(0);
				}
			}
		}



		/*if (num % i == 0)
		{
			printf("%ld ", i);
			break;
		}*/
	}
	printf("\n");

	return (0);
}
