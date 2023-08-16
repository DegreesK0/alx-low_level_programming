#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two values
 * @a: first number
 * @b: second number
 *
 * Return: the sum if successful
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substracts two values
 * @a: first number
 * @b: second number
 *
 * Return: the difference if successful
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two values
 * @a: first number
 * @b: second number
 *
 * Return: the product if successful
 */

int op_mul(int a, int b)
{
	return (a * b);
}



/**
 * op_div - divides two values
 * @a: first number
 * @b: second number
 *
 * Return: the quotient if successful
 */

int op_div(int a, int b)
{
	return (a / b);
}



/**
 * op_mod - finds the remainder of the division of two values
 * @a: first number
 * @b: second number
 *
 * Return: the remainder if successful
 */

int op_mod(int a, int b)
{
	return (a % b);
}


