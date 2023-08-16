#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - takes an arithmetic operator and connects it to its operation
 * @s: the character of the operation
 *
 * Return: returns the correct operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	/* char a = '+'; */
	/* char *ptr = &a; */


	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}


	/* printf("%s\n", ops[0].op); */
	/* return (ops[0].f); */
	/* return (ops[0].f); */

	return (NULL);
}


