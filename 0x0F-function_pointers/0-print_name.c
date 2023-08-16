#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - passes the name to another function to be printed
 * @name: the name to be printed
 * @f: the function to pass the name to.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}



