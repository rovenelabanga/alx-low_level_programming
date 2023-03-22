#include "main.h"
/**
 *print_last_digit- prints the last digit of a number
 *@n: Variable to be checked
 *Return: Value of last number
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

