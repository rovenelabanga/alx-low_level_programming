#include "main.h"
/**
 *print_triangle- prints a triangle followed by a new line
 *@size: variable to be computed
 *Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= 1; j--)
		{
			_putchar(' ');
		}
		for (x = 1; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
