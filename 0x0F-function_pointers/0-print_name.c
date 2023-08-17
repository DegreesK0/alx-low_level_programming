/*#include <stdio.h> */
/*#include <stdlib.h> */
/*#include "function_pointers.h" */

/*/1** */
/* * print_name - passes the name to another function to be printed */
/* * @name: the name to be printed */
/* * @f: the function to pass the name to. */
/* *1/ */

/*void print_name(char *name, void (*f)(char *)) */
/*{ */
/*	if (name == NULL || f == NULL) */
/*		return; */

/*	/1* if (!name || !f) *1/ */
/*	/1*	return; *1/ */

/*	(*f)(name); */
/*} */


#include "function_pointers.h"

/**
  * print_name - Printing my name
  * @name: First argument
  * @f: Inner function
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
