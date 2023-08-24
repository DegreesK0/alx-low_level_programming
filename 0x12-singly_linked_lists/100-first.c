#include <stdio.h>


void print_before_main(void) __attribute__((constructor));

/**
 * print_first - Prints a message before the main function is executed.
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
