#include <stdio.h>
/**
 * main - prints all the possible combinations of single digit numbers
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
