#include "main.h"
/**
 * times_table - hehe
 * Description: main fun
 * Return: 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar ('0');
		_putchar (',');
		_putchar (' ');
		for (j = 1; j < 10; j++)
		{
			k = (i * j);
			if ((k / 10) > 0)
				_putchar ((k / 10) + '0');
			else
				_putchar (' ');
			_putchar ((d % 10) + '0');

			if (j <= 8)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar('\n');
	}
}
