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
	int i;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	len--;
	for (i = 0 ; i <= len ; o++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
