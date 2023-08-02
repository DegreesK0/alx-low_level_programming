#include "main.h"
#include <stdio.h>

/**
 * actual_prime_function - actually checks for the prime number
 * @n: the number to check
 * @factor: the factor to check
 *
 * Return: 1 if prime, 0 if not
 */

int actual_prime_function(int n, int factor)
{
	if (n == factor)
		return (1);
	else if (n % factor == 0)
		return (0);
	else
		return (actual_prime_function(n, factor + 1));
}


/**
* is_prime_number - returns 1 if the integer is a prime number, otherwise 0
* @n: number to check
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	int factor = 2;

	if (n <= 1)
		return (0);

	return (actual_prime_function(n, factor));
}
