#include <stdio.h>

/**
* main - print out numbers 1 to 100, with a twist
* Description: print out numbers 1 to 100, but replace
* multiples of 3 with Fizz, multiples of 5 with Buzz
* and multiples of 3 AND 5 with FizzBuzz
*
* Return: 0 means success
*/

int main(void)
{
	int num = 1;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			if (num == 100)
			{
				printf("Buzz");
			}
			else
			{
			printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}

	printf("\n");

	return (0);

}
