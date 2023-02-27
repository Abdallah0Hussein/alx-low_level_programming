#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	char *x = str;
	while (*str != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(x[len]);
		}
		str++;
		len++;

	}
	_putchar('\n');
}
