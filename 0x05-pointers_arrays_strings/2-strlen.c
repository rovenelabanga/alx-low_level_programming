#include "main.h"
/**
 *_strlen- returns the length of a string
 *@s: variable to be computed
 *Return: returns length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
