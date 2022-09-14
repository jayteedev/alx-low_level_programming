#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets twice in small letters 10 times
 *
 * Return: 10x small letter alphabets
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
