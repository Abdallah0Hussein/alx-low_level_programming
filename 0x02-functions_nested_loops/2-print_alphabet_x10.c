#include "main.h"
/**
 * print_alphabet_x10 - main func
 * Description: hi hi hi
 * Return: 0
 */
void print_alphabet_x10(void)
{

	for (int x = 0; x < 10; ++x)
	{
		for (int i = 'a'; i <= 'z'; ++i)
			_putchar(i);
		_putchar('\n');
	}
}
