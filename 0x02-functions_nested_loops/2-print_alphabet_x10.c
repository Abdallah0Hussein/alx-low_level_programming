#include "main.h"
/**
 * print_alphabet_x10 - main func
 * Description: hi hi hi
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x = 0;

	for (; x < 10; ++x)
	{
		int i = 'a';

		for (; i <= 'z'; ++i)
			_putchar(i);
		_putchar('\n');
	}
}
