#include "main.h"
/**
 *_isupper- checks if a character is uppercase
 *@c: character to be computed
 *
 *Return: 1 if its uppercase,0 if its lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
