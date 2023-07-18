#include "main.h"

/**
* _abs - calculates the absolute value of an input
* @num: number with an absolute value
*
* Return: provides the absolute value of the number
*/

int _abs(int num)
{
	int abs_num = 0;

	if (num >= 0)
	{
		abs_num = num;
	}
	else if (num < 0)
	{
		abs_num = -num;
	}

	return (abs_num);
}
