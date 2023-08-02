#include "main.h"
#include <stdio.h>

/**
 * sqrtRecursive - ACTUALLY finds the square root of a number n
 * @n: the number
 * @guess: the guess used
 *
 * Return: returns a number and a new guess, or just returns the correct guess
 */

int sqrtRecursive(int n, double guess)
{
	double new_guess = 0.5 * (guess + n / guess);

	if (new_guess == guess)
		return (guess);
	else
		return (sqrtRecursive(n, new_guess));
}

/**
* _sqrt_recursion - finds the square root of a number n
* @n: - number to find the square root of
*
* Return: returns the square root of a number, otherwise returns -1
*/

int _sqrt_recursion(int n)
{
	double initial_guess = 1.0;

	return (sqrtRecursive(n, initial_guess));
}
