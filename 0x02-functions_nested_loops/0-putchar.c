#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - main func
 * Description: hehe
 * Return: 0
 */
int main(void)
{
	char *c = ("_putchar\n");

	for (int i = 0; i < (int)strlen(c); i++)
		_putchar(c[i]);
	return (0);
}
