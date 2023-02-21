#include "main.h"
/**
 * _isalpha - main func
 * Description: hi hi hi
 * @c: int c
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
