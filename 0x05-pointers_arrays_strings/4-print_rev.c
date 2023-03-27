#include "main.h"
/**
 *print_rev- prints a string in reverse followed by a new line
 *@s: variable to be computed
 *Return: void
 */

void print_rev(char *s)
{
	int longii = 0;
	int o;

	while (*s != '\0')
	{
		longii++;
		s++;
	}
	s--;
	for (o = longii; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
