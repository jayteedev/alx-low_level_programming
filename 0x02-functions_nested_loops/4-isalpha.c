#include "main.h"
/**
 * _isalpha - function that checks for uppercase letters
 * @c: single letter input
 * Return: return 1 if uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
