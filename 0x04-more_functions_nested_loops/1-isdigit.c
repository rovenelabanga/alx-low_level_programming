#include "main.h"
/**
 *_isdigit-checks a digit from 0 to 1
 *@c: variable to be computed
 *Return: 1 if it is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
