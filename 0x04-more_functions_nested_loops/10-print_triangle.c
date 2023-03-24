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

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
